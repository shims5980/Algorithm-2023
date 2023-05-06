/*	����: �˰���
	�̸�: �ɱ���
	�й�: 201910852
	�ǽ���¥: 2023.
	�ǽ�����: ������	*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dividePivot(int arr[], int left, int right);    //������ �Ǻ��� ���� �� �Ǻ��� left�� �ΰ� �Ǻ����� ū ���� ���� ���� ���Ͽ� �ڸ��ٲٴ� �Լ�
void quickSort(int arr[], int left, int right);     //�Ǻ����� ���ĵ� �迭�� �̿��Ͽ� �Ǻ��� ���ʰ� ���������� �ٽ� �����ϴ� �Լ�

int main(void)
{
    int arr[10], i = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    FILE* fp = NULL;

    // �迭�� ���� ������ ������ �б� �������� ����
    fp = fopen("D:\data.txt", "r");
    if (fp == NULL)
    {
        printf("data ������ ���µ� �����߽��ϴ�. \n");
        return 0;
    }
    else
        printf("data ������ ���µ� �����߽��ϴ�. \n");

    //������ ������ ���� �ƴҶ����� ���� �������� arr�迭�� ������ �ϳ��� ����
    while (fscanf(fp, "%d", &arr[i]) != EOF)
        i++;

    fclose(fp);

    //�� ���� �Լ� �̿��� ����
    quickSort(arr, 0, n - 1);

    //���ĵ� �����͸� ������ ���� ������� ����
    fp = fopen("D:\ result.txt", "w");

    if (fp == NULL)
    {
        printf("result ������ �����ϴµ� �����߽��ϴ�.\n");
        return 0;
    }
    else
        printf("result ������ �����Ͽ����ϴ�.\n");

    //�迭�� ���Ҹ� ������������ ���Ͽ� ����
    for (i = 0; i < n; i++)
        fprintf(fp, "%d ", arr[i]);

    fclose(fp);

    return 0;
}

int dividePivot(int arr[], int left, int right)
{
    srand(time(NULL));

    int PI = rand() % (right - left + 1) + left; //�Ǻ��� ���� ���� �� ���� ����
    int pivot = arr[PI];                         //�Ǻ� ��ġ�� ������
    int temp, i = left + 1, j = right;

    //�Ǻ��� �迭 ���� ���� �����Ϳ� ��ȯ
    temp = arr[PI];
    arr[PI] = arr[left];
    arr[left] = temp;

    // i�� j �ε����� ���� ������ ������ �ݺ�
    while (i < j)
    {
        // �Ǻ����� ū ������ i ����
        while (arr[i] <= pivot && i <= right)
            i++;
        // �Ǻ����� ���� ������ j ����
        while (arr[j] > pivot && j >= left)
            j--;
        // i�� j�� �������� �ʾҴٸ� �� ��ȯ
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    //�迭 �� ���ʿ� �ִ� �Ǻ� ���� ���� �ڸ��� �̵�
    temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;
    PI = j;

    //�Ǻ� ����
    return PI;
}

void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int p;
        p = dividePivot(arr, left, right);

        quickSort(arr, left, p - 1);    //�Ǻ� ���� ���� �迭 ����
        quickSort(arr, p + 1, right);   //�Ǻ� ���� ū �迭 ����
    }
}