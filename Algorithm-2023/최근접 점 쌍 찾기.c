#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 99999.0     //�ӽ� �ִ�

//���� ��ǥ
typedef struct Point {
    double x, y;
}Points;

int CompareX(const void* a, const void* b);
double Distance(Points p1, Points p2);
double ClosestPair(Points* points, int n);
void testClosetPair_File();

int main(void) 
{
    testClosetPair_File();

    return 0;
}

//x ��ǥ�� �������� �������� ����
//int Mycmp(const void* a, const void* b) {return (*(int*)a - *(int*)b);} �������� ����
int CompareX(const void* a, const void* b) 
{
    Points* p1 = (Points*)a;
    Points* p2 = (Points*)b;
    return (p1->x - p2->x);
}

//�Ÿ� ���ϴ� �Լ� sqrt: ������, pow: n������
double Distance(Points p1, Points p2) { return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2)); }

double ClosestPair(Points* points, int n)
{
    //IF (i <= 3) return (2~3���� ���� ������ �ֱ��� ��)
    if (n <= 3) 
    {
        double min_dist = MAX;      
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                double dist = Distance(points[i], points[j]);
                if (dist < min_dist)
                    min_dist = dist;
            }
        }
        return min_dist;
    }

    //x ��ǥ�� �������� ���ĵ� �迭�� �� ���� ����
    int mid = n / 2;
    double mid_x = points[mid].x;
    double dl = ClosestPair(points, mid);
    double dr = ClosestPair(points + mid, n - mid);
    
    //���ʰ� �������� �ּڰ� double fmin: double a, double b�� �ּڰ�
    double d = fmin(dl, dr);

    //�߾� �������� �ִ� �Ÿ��� ���� ���� �ִ� �� ã��
    Points strip[100];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (fabs(points[i].x - mid_x) < d)  //fabs: �ε� �Ҽ��� ���� �����Լ�
        {
            strip[j] = points[i];
            j++;
        }
    }

    //�߾� �������� �ִ� �Ÿ�
    for (int i = 0; i < j - 1; i++)
    {
        for (int k = i + 1; k < j && (strip[k].y - strip[i].y) < d; k++)
        {
            double dist = Distance(strip[i], strip[k]);
            if (dist < d)
                d = dist;
        }
    }

    return d;
}

void testClosetPair_File()
{
    Points points[100];
    FILE* fp = NULL;

    //���� ��ǥ���� ���� ���� ����
    fp = fopen("D:\CPdata.txt", "r");
    if (fp == NULL)
    {
        printf("CPdata ������ ���µ� �����߽��ϴ�. \n");
        return 0;
    }
    else
        printf("CPdata ������ ���µ� �����߽��ϴ�. \n");

    //���� ��ǥ�� �о� ����ü ������ ����
    int i = 0;
    while (fscanf(fp, "%lf %lf\n", &points[i].x, &points[i].y) != EOF)
    {
        //printf("x = %.2lf, y = %.2lf\n", points[i].x, points[i].y); ���������� ����Ǵ� �� Ȯ���ϱ� ����
        i++;
    }
    fclose(fp);

    //qsort: ������(�����ϰ��� �ϴ� �迭�� ������, �迭 �� ���ҵ��� �� ����, �迭�ȿ� ������ �ϳ��� ũ��, �� ������ �Լ� ������)
    qsort(points, 4, sizeof(Points), CompareX);

    //���ĵ� �迭�� ������ �ֱ��� ���� ���� �Ÿ� ���ϱ�
    double min_dist = ClosestPair(points, 4);

    //���� ��� ������ ���� ����
    fp = fopen("D:\CPresult.txt", "w");
    if (fp == NULL)
    {
        printf("CPresult ������ �����ϴµ� �����߽��ϴ�. \n");
        return 0;
    }
    else
        printf("CPresult ������ �����ϴµ� �����߽��ϴ�. \n");

    //result.txt���Ͽ� ����� ����
    fprintf(fp, "�ֱ��� �� ���� �Ÿ��� %.2lf\n", min_dist);
}