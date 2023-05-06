/*	과목: 알고리즘
	이름: 심기윤
	학번: 201910852
	실습날짜: 2023.
	실습내용: 퀵정렬	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dividePivot(int arr[], int left, int right);    //랜덤한 피봇을 설정 후 피봇을 left에 두고 피봇보다 큰 수랑 작은 수를 비교하여 자리바꾸는 함수
void quickSort(int arr[], int left, int right);     //피봇으로 정렬된 배열을 이용하여 피봇의 왼쪽과 오른쪽으로 다시 정렬하는 함수

int main(void)
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

    //퀵 정렬 함수 이용한 정렬
    quickSort(arr, 0, n - 1);

    //정렬된 데이터를 저장할 파일 쓰기모드로 생성
    fp = fopen("D:\ result.txt", "w");

    if (fp == NULL)
    {
        printf("result 파일을 생성하는데 실패했습니다.\n");
        return 0;
    }
    else
        printf("result 파일을 생성하였습니다.\n");

    //배열의 원소를 정수형식으로 파일에 저장
    for (i = 0; i < n; i++)
        fprintf(fp, "%d ", arr[i]);

    fclose(fp);

    return 0;
}

int dividePivot(int arr[], int left, int right)
{
    srand(time(NULL));

    int PI = rand() % (right - left + 1) + left; //피봇의 범위 설정 후 랜덤 배정
    int pivot = arr[PI];                         //피봇 위치에 데이터
    int temp, i = left + 1, j = right;

    //피봇과 배열 제일 왼쪽 데이터와 교환
    temp = arr[PI];
    arr[PI] = arr[left];
    arr[left] = temp;

    // i와 j 인덱스가 서로 교차할 때까지 반복
    while (i < j)
    {
        // 피봇보다 큰 값까지 i 증가
        while (arr[i] <= pivot && i <= right)
            i++;
        // 피봇보다 작은 값까지 j 감소
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

    //배열 맨 왼쪽에 있던 피봇 값을 원래 자리로 이동
    temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;
    PI = j;

    //피봇 리턴
    return PI;
}

void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int p;
        p = dividePivot(arr, left, right);

        quickSort(arr, left, p - 1);    //피봇 기준 작은 배열 정렬
        quickSort(arr, p + 1, right);   //피봇 기준 큰 배열 정렬
    }
}