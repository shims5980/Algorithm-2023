#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <time.h>
#include <string.h>
#include <windows.h>
#define INF 9999
#define RN 100

extern void gotoxy(int x, int y);

typedef struct location {		// 지역의 이름 X좌표 Y좌표를 저장하는 구조체(현재 str 오류나서 빼버림) 
	int index;
	char region[20];
	int x;
	int y;
}Location;

int RRN;
Location L[100];
double distance[100][100];


void file_read();								// region 파일 읽는 함수 
void print_distance();							// 지역 간 거리를 출력하는 함수 
void distance_decide(Location P[]);				// 지역 간 거리를 구하는 함수 
void distance_reset();							// 지역 간 거리를 초기화하는 함수 
void floyd();									// 최단 경로 알고리즘 
void recent_path(char start[], char end[]);		// 최근 경로 텍스트 파일에 저장하는 함수 
double distance_search(char start[], char end[]); // 지역 간 거리를 찾아주는 함수 

void recent_path_watch(int menu);						// 최근 경로 출력하는 함수 
void region_addition();							// 지역 추가하는 함수 
void region_print();							// 지역 출력해주는 함수 
void bookmark_addtion(char book[]);				// 즐겨찾기 지역 추가 
void bookmark_watch(int menu);							// 즐겨찾기 지역 조회 

void file_read() {
	FILE* fp = NULL;
	int i = 0;
	fp = fopen("region.txt", "r");
	if (fp != NULL) {
		while (fscanf(fp, "%d\t%s\t%d\t%d\n", &L[i].index, &L[i].region, &L[i].x, &L[i].y) != EOF) {
			i++;
		}
		RRN = i;
		fclose(fp);
		distance_reset();
		distance_decide(L);
		floyd();
	}
}
void distance_reset() {		// EX 서울에서 서울까지의 거리는 0 
	int i, j;
	for (i = 0; i < RRN; i++) {
		for (j = 0; j < RRN; j++) {
			distance[i][j] = 0;
		}
	}
}
void distance_decide(Location P[]) {	// 각 지역에서 다른 지역까지의 거리를 결정하는 함수 
	int i, j;
	double dist;
	for (i = 0; i < RRN; i++) {
		for (j = i + 1; j < RRN; j++) {
			dist = sqrt(pow(P[i].x - P[j].x, 2) + pow(P[i].y - P[j].y, 2));	// 거리의 실수 값  
			if (dist >= 30.0) {		// if 거리가 30km 이상이라면 거리를 무한대로 설정(한 번에 가는 길 x) 
				distance[i][j] = INF;
				distance[j][i] = INF;
			}
			else {
				distance[i][j] = dist;
				distance[j][i] = dist;
			}
		}
	}
}
void print_distance() {
	int i, j;
	for (i = 0; i < RRN; i++) {
		printf("%s ", L[i].region);
		for (j = 0; j < RRN; j++) {
			printf("% 3.1f ", distance[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
void floyd() {		// 최단 경로 찾기 알고리즘 
	int i, j, k;
	for (k = 0; k < RRN; k++) {
		for (i = 0; i < RRN; i++) {
			for (j = 0; j < RRN; j++) {
				if (distance[i][k] + distance[k][j] < distance[i][j]) {
					distance[i][j] = distance[i][k] + distance[k][j];
				}
			}
		}
	}
}
double distance_search(char start[], char end[]) {
	int index1 = 0;
	int index2 = 0, i;
	for (i = 0; i < RRN; i++) {
		if (strcmp(L[i].region, start) == 0) {
			index1 = i;
		}
		if (strcmp(L[i].region, end) == 0) {
			index2 = i;
		}
	}
	return distance[index1][index2];
}
void recent_path(char start[], char end[]) {	// 최근 경로 저장 함수 
	FILE* fp = fopen("recent_path.txt", "a");
	fprintf(fp, "%s\t%s\n", start, end);
	fclose(fp);
}
void recent_path_watch(int menu) {   // 최근 경로 출력 함수 
	FILE* fp = fopen("recent_path.txt", "r");
	char recent1[100][10];
	char recent2[100][10];
	int i = 0;
	int k = 0;
	int x = 0;
	int j;
	while (fscanf(fp, "%s\t%s\n", recent1[i], recent2[i]) != EOF)
	{
		i++;
	}

	if (menu == 1)
	{
		if (i > 9) {
			k = i - 9;
			for (j = i - 1; j > k; j--) {
				gotoxy(16, 12 + (2 * x));
				x++;
				printf("%s\t\t\t%s", recent1[j], recent2[j]);
			}
		}
		else {
			for (j = i - 1; j >= 0; j--) {
				gotoxy(16, 12 + (2 * x));
				x++;
				printf("%s\t\t\t%s", recent1[j], recent2[j]);
			}
		}
	}
	else
	{
		if (i > 9) {
			k = i - 9;
			for (j = i - 1; j > k; j--) {
				gotoxy(85, 12 + (2 * x));
				x++;
				printf("%s\t\t\t%s", recent1[j], recent2[j]);
			}
		}
		else {
			for (j = i - 1; j >= 0; j--) {
				gotoxy(85, 12 + (2 * x));
				x++;
				printf("%s\t\t\t%s", recent1[j], recent2[j]);
			}
		}
	}
	
	fclose(fp);
}
void region_addition() {
	FILE* fp = fopen("region.txt", "a");
	char region[20];
	int x, y;
	RRN++;
	gotoxy(46, 16);  //지역이름 입력받을 칸으로 이동
	scanf("%s", region);
	gotoxy(46, 20); //좌표 입력받을 칸으로 이동
	scanf("%d", &x);

	gotoxy(46, 24); //좌표 입력받을 칸으로 이동
	scanf("%d", &y);
	fprintf(fp, "%d\t%s\t%d\t%d\n", RRN - 1, region, x, y);
	file_read();
	fclose(fp);
}
void region_print() {
	int i;
	printf("지역을 조회합니다.\n");
	for (i = 0; i < RRN; i++) {
		printf("%s\n", L[i].region);
	}
}
void bookmark_addtion(char book[]) {
	FILE* fp = fopen("bookmark.txt", "a");
	fprintf(fp, "%s\n", book);
	fclose(fp);
}
void bookmark_watch(int menu)
{
	FILE* fp = fopen("bookmark.txt", "r");
	char bookmark[100][100];
	int i = 0;
	int k = 0;
	int j;
	int x = 0;
	while (fscanf(fp, "%s\n", bookmark[i]) != EOF) {
		i++;
	}
	if (i > 9) {
		k = i - 9;
	}
	else {
		k = 0;
	}
	if (menu == 1)
	{
		for (j = k; j < i; j++) {
			gotoxy(16, 12 + (2 * x));
			x++;
			printf("%s\n", bookmark[j]);
		}
	}
	else if (menu == 2)
	{
		for (j = k; j < i; j++) {
			gotoxy(85, 12 + (2 * x));
			x++;
			printf("%s\n", bookmark[j]);
		}
	}
}