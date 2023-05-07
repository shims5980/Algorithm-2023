/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	실습날짜: 2023. 05. 05
	실습내용: 선택 문제 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dividePivot(int arr[], int left, int right);
int Selection(int arr[], int left, int right, int k);
void testSelection();
void testSelectionF();

int main(void)
{
    //testSelection();
    testSelectionF();

    return 0;
}


int dividePivot(int arr[], int left, int right)
{
    srand(time(NULL));

    //피봇의 범위 설정 후 랜덤 배정
    int PI = rand() % (right - left + 1) + left;
    int pivot = arr[PI];
    int temp, i = left + 1, j = right;

    //피봇과 배열 제일 왼쪽 데이터와 교환
    temp = arr[PI];
    arr[PI] = arr[left];
    arr[left] = temp;

    // i와 j 인덱스가 서로 교차할 때까지 반복
    while (i < j)
    {
        // 피봇보다 값이 크고 i가 배열 맨 오른쪽 인덱스보다 작을때까지 i 증가
        while (arr[i] <= pivot && i <= right)
            i++;
        // 피봇보다 값이 작고 j가 배열 맨 왼쪽 인덱스보다 클때까지 j 감소
        while (arr[j] > pivot && j >= left)
            j--;
        // i와 j가 교차하지 않았다면 값 교환
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    //배열 맨 왼쪽에 있던 피봇 값을 원래 자리로 이동 후 피봇도 이동
    temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;
    PI = j;

    //피봇 리턴
    return PI;
}

int Selection(int arr[], int left, int right, int k)
{
    int p, s;
    p = dividePivot(arr, left, right);              //피봇을 지정한다.
    s = (p - 1) - left + 1;                         //피봇보다 작은 배열의 크기
    if (k <= s) Selection(arr, left, p - 1, k);     //k가 s보다 작다면 s범위에서 다시 Selection
    else if (k == s + 1) return arr[p];             //k가 피봇위치라면 피봇 데이터 값 리턴
    else Selection(arr, p + 1, right, k - s - 1);   //그 이상이라면 그 이상의 크기에서 Selection
}

void testSelection()
{
    int arr[10], i, user, result;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < 10; i++)
        arr[i] = i;
    printf("몇번째 작은 수를 찾으시겠습니까?");
    scanf("%d", &user);
    result = Selection(arr, 0, n - 1, user);

    printf("%d번째 작은 수는 %d입니다.\n", user, result);

}

void testSelectionF()
{
    int arr[10], i = 0, user, result;
    int n = sizeof(arr) / sizeof(arr[0]);
    FILE* fp = NULL;

    // 배열에 넣을 데이터 파일을 읽기 형식으로 열기
    fp = fopen("D:\QuickSort result.txt", "r");
    if (fp == NULL)
    {
        printf("QuickSort result 파일을 여는데 실패했습니다. \n");
        return 0;
    }
    else
        printf("QuickSort result 파일을 여는데 성공했습니다. \n");

    //파일의 데이터 끝이 아닐때까지 정수 형식으로 arr배열에 데이터 하나씩 저장
    while (fscanf(fp, "%d", &arr[i]) != EOF)
        i++;

    fclose(fp);

    printf("몇 번째 작은 수를 찾으시겠습니까? ");
    scanf("%d", &user);

    //선택문데 함수를 호출하고 리턴값을 result에 저장한다.
    result = Selection(arr, 0, n - 1, user);

    //정렬된 데이터를 저장할 파일 쓰기모드로 생성
    fp = fopen("D:\Selection result.txt", "w");

    if (fp == NULL)
    {
        printf("Selection result 파일을 생성하는데 실패했습니다.\n");
        return 0;
    }
    else
        printf("Selection result 파일을 생성하는데 성공했습니다.\n");

    //배열의 원소를 정수형식으로 파일에 저장
    fprintf(fp, "%d", result);

    fclose(fp);
}