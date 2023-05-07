/*	����: �˰���
    �̸�: �ɱ���
    �й�: 201910852
    �ǽ���¥: 2023.05.05
    �ǽ�����: �պ�����	*/
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
        k = (left + right) / 2; //������ ������

        MergeSort(arr, left, k);        //k�� �������� ����
        MergeSort(arr, k + 1, right);   //k�� �������� ������ �迭�� �����Ѵ�.
        int ai = left, bi = k + 1, ci = left;
        int crr[10];

        //���ο� �迭�� ���ĵ� ���� �迭 �� ���� ������ �ִ´�.
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

        // ���� �迭�� �ӽ� �迭 �����͸� �����Ѵ�.
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

    //�պ� ���� �Լ� �̿��� ����
    MergeSort(arr, 0, n - 1);

    //���ĵ� �����͸� ������ ���� ������� ����
    fp = fopen("D:\MergeSort result.txt", "w");

    if (fp == NULL)
    {
        printf("MergeSort result ������ �����ϴµ� �����߽��ϴ�.\n");
        return 0;
    }
    else
        printf("MergeSort result ������ �����Ͽ����ϴ�.\n");

    //�迭�� ���Ҹ� ������������ ���Ͽ� ����
    for (i = 0; i < n; i++)
        fprintf(fp, "%d ", arr[i]);

    fclose(fp);
}