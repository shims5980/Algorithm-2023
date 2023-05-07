/*	����: �˰���
	�̸�: �ɱ���
	�й�: 201910852
	�ǽ���¥: 2023. 05. 05
	�ǽ�����: ���� ���� */
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

    //�Ǻ��� ���� ���� �� ���� ����
    int PI = rand() % (right - left + 1) + left;
    int pivot = arr[PI];
    int temp, i = left + 1, j = right;

    //�Ǻ��� �迭 ���� ���� �����Ϳ� ��ȯ
    temp = arr[PI];
    arr[PI] = arr[left];
    arr[left] = temp;

    // i�� j �ε����� ���� ������ ������ �ݺ�
    while (i < j)
    {
        // �Ǻ����� ���� ũ�� i�� �迭 �� ������ �ε������� ���������� i ����
        while (arr[i] <= pivot && i <= right)
            i++;
        // �Ǻ����� ���� �۰� j�� �迭 �� ���� �ε������� Ŭ������ j ����
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

    //�迭 �� ���ʿ� �ִ� �Ǻ� ���� ���� �ڸ��� �̵� �� �Ǻ��� �̵�
    temp = arr[left];
    arr[left] = arr[j];
    arr[j] = temp;
    PI = j;

    //�Ǻ� ����
    return PI;
}

int Selection(int arr[], int left, int right, int k)
{
    int p, s;
    p = dividePivot(arr, left, right);              //�Ǻ��� �����Ѵ�.
    s = (p - 1) - left + 1;                         //�Ǻ����� ���� �迭�� ũ��
    if (k <= s) Selection(arr, left, p - 1, k);     //k�� s���� �۴ٸ� s�������� �ٽ� Selection
    else if (k == s + 1) return arr[p];             //k�� �Ǻ���ġ��� �Ǻ� ������ �� ����
    else Selection(arr, p + 1, right, k - s - 1);   //�� �̻��̶�� �� �̻��� ũ�⿡�� Selection
}

void testSelection()
{
    int arr[10], i, user, result;
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < 10; i++)
        arr[i] = i;
    printf("���° ���� ���� ã���ðڽ��ϱ�?");
    scanf("%d", &user);
    result = Selection(arr, 0, n - 1, user);

    printf("%d��° ���� ���� %d�Դϴ�.\n", user, result);

}

void testSelectionF()
{
    int arr[10], i = 0, user, result;
    int n = sizeof(arr) / sizeof(arr[0]);
    FILE* fp = NULL;

    // �迭�� ���� ������ ������ �б� �������� ����
    fp = fopen("D:\QuickSort result.txt", "r");
    if (fp == NULL)
    {
        printf("QuickSort result ������ ���µ� �����߽��ϴ�. \n");
        return 0;
    }
    else
        printf("QuickSort result ������ ���µ� �����߽��ϴ�. \n");

    //������ ������ ���� �ƴҶ����� ���� �������� arr�迭�� ������ �ϳ��� ����
    while (fscanf(fp, "%d", &arr[i]) != EOF)
        i++;

    fclose(fp);

    printf("�� ��° ���� ���� ã���ðڽ��ϱ�? ");
    scanf("%d", &user);

    //���ù��� �Լ��� ȣ���ϰ� ���ϰ��� result�� �����Ѵ�.
    result = Selection(arr, 0, n - 1, user);

    //���ĵ� �����͸� ������ ���� ������� ����
    fp = fopen("D:\Selection result.txt", "w");

    if (fp == NULL)
    {
        printf("Selection result ������ �����ϴµ� �����߽��ϴ�.\n");
        return 0;
    }
    else
        printf("Selection result ������ �����ϴµ� �����߽��ϴ�.\n");

    //�迭�� ���Ҹ� ������������ ���Ͽ� ����
    fprintf(fp, "%d", result);

    fclose(fp);
}