#pragma once

typedef struct location {		// 지역의 이름 X좌표 Y좌표를 저장하는 구조체(현재 str 오류나서 빼버림) 
	int index;
	char region[20];
	int x;
	int y;
}Location;

extern void main0();
extern void bookmark1();
extern void manager1();
extern void find1();

extern void file_read();                         // region 파일 읽는 함수 
extern void print_distance();                      // 지역 간 거리를 출력하는 함수 
extern void distance_decide(Location P[]);             // 지역 간 거리를 구하는 함수 
extern void distance_reset();                      // 지역 간 거리를 초기화하는 함수 
extern void floyd();                            // 최단 경로 알고리즘 
extern void recent_path(char start[], char end[]);       // 최근 경로 텍스트 파일에 저장하는 함수 
extern double distance_search(char start[], char end[]); // 지역 간 거리를 찾아주는 함수 

extern void recent_path_watch(int menu);                     // 최근 경로 출력하는 함수 
extern int region_addition();                        // 지역 추가하는 함수 
extern void region_print();                           // 지역 출력해주는 함수 
extern void bookmark_addtion(char book[]);               // 즐겨찾기 지역 추가 
extern void bookmark_watch(int mneu);
extern void Error_UI_1_0();
extern void Back_UI_1_1();