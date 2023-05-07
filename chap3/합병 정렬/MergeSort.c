/*	과목: 알고리즘
    이름: 심기윤
    학번: 201910852
    실습날짜: 2023.05.05
    실습내용: 합병정렬	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void MergeSort(int arr[], int left, int right);
void testMergeSort();
void testMergeSortF();

int main(void)
{
    //testMergeSort();
    testMergeSortF();

    return 0;
}

void MergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int k;
        k = (left + right) / 2; //반으로 나눈다

        MergeSort(arr, left, k);        //k를 기준으로 왼쪽
        MergeSort(arr, k + 1, right);   //k를 기준으로 오른쪽 배열을 정렬한다.
        int ai = left, bi = k + 1, ci = left;
        int crr[10];

        //새로운 배열에 정렬된 양쪽 배열 중 작은 값부터 넣는다.
        while (ai <= k && bi <= right) 
        {
            if (arr[ai] <= arr[bi]) 
                crr[ci++] = arr[ai++];
            else 
                crr[ci++] = arr[bi++];
        }
        while (ai <= k) 
            crr[ci++] = arr[ai++];

        while (bi <= right) 
            crr[ci++] = arr[bi++];

        // 원래 배열에 임시 배열 데이터를 저장한다.
        for (int i = left; i <= right; i++) 
            arr[i] = crr[i];
    }
}

void testMergeSort()
{
    int arr[10], i, j;
    int n = sizeof(arr) / sizeof(arr[0]);
    j = 10;
    for (i = 0; i < n; i++, j--)
    {
        arr[i] = j;
        printf("%d ", arr[i]);
    }
    printf("\n");

    MergeSort(arr, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void testMergeSortF()
{
    int arr[10], i = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    FILE* fp = NULL;

    // 배열에 넣을 데이터 파일을 읽기 형식으로 열기
    fp = fopen("D:\data.txt", "r");
    if (fp == NULL)
    {
        printf("data 파일을 여는데 실패했습니다. \n");
        return 0;
    }
    else
        printf("data 파일을 여는데 성공했습니다. \n");

    //파일의 데이터 끝이 아닐때까지 정수 형식으로 arr배열에 데이터 하나씩 저장
    while (fscanf(fp, "%d", &arr[i]) != EOF)
        i++;

    fclose(fp);

    //합병 정렬 함수 이용한 정렬
    MergeSort(arr, 0, n - 1);

    //정렬된 데이터를 저장할 파일 쓰기모드로 생성
    fp = fopen("D:\MergeSort result.txt", "w");

    if (fp == NULL)
    {
        printf("MergeSort result 파일을 생성하는데 실패했습니다.\n");
        return 0;
    }
    else
        printf("MergeSort result 파일을 생성하였습니다.\n");

    //배열의 원소를 정수형식으로 파일에 저장
    for (i = 0; i < n; i++)
        fprintf(fp, "%d ", arr[i]);

    fclose(fp);
}
