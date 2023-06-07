#define _CRT_SECURE_NO_WARNINGS  // 비주얼 스튜디오에서 sacnf 오류 무시해주는 정의
// UI

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define P 38
#define PP P+21
// ┫ ┃ ━ ┓ ┛ ┗ ┏ ┳ ┻ ┣ ╋
void gotoxy(int x, int y);
void main_UI();        // 메인 화면
void find_UI_1_1();    // 길찾기 메인화면
void find_UI_1_2();    // 출발지 도착지 입력하면 확인문
void find_UI_1_3();    // 입력한거 최종출력 출력
void admin_UI_2_1();   // 관리자 메인화면

void admin_UI_2_2_1(); // 관리자 지역추가 화면
void admin_UI_2_3_1(); // 관리자 지역삭제 화면

void admin_UI_2_2();    // 지역추가 화면확인(작게 띄움) 완
void admin_UI_2_3();    // 지역삭제 화면확인(작게 띄움) 완

void record_UI_3_1();   // 최근기록 한번에 보여주는 화면
void bookmark_UI_4_1(); // 즐찾 메인화면
void bookmark_UI_4_2(); // 즐찾한 목록 출력하는 화면

void bookmark_UI_4_3(); // 즐찾 지역 추가 화면확인(작게 띄움) 완
void bookmark_UI_4_4(); // 즐찾 지역 삭제 화면확인(작게 띄움) 완

void bookmark_UI_4_3_1(); // 즐찾 지역 추가 화면
void bookmark_UI_4_4_1(); // 즐찾 지역 삭제 화면

void Error_UI_1_0();
void Back_UI_1_1();
void End_UI_1_1();

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void main_UI()
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");

	// ㄴ
	gotoxy(13, 3);
	printf("**      *     *    *       * ********* *********     *    ********* ********* ********* **      * \n");
	gotoxy(13, 4);
	printf("* *     *    * *    *     *      *     *            * *       *         *     *       * * *     * \n");
	gotoxy(13, 5);
	printf("*   *   *   *****    *   *       *     *   *****   *****      *         *     *       * *   *   * \n");
	gotoxy(13, 6);
	printf("*     * *  *     *    * *        *     *      **  *     *     *         *     *       * *     * * \n");
	gotoxy(13, 7);
	printf("*      ** *       *    *     ********* ********* *       *    *     ********* ********* *      ** \n");
	gotoxy(13, 8);



	gotoxy(16, 12);
	printf("1. 길찾기");
	gotoxy(16, 16);
	printf("2. 즐겨찾기");
	gotoxy(16, 20);
	printf("3. 최근기록");
	gotoxy(16, 24);
	printf("4. 종료");

	// 도움말 창
	/*
	gotoxy(81, 9);
	for (i = 0; i < 35; i++)
		printf("━");

	gotoxy(81, 9);
	printf("┏");
	gotoxy(116, 9);
	printf("┓");

	for (i = 0; i < 18; i++)
	{
		gotoxy(81, 10 + i);
		printf("┃\t\t\t\t   ┃\n");
	}

	gotoxy(81, 28);
	for (i = 0; i < 35; i++)
		printf("━");

	gotoxy(81, 28);
	printf("┗");
	gotoxy(116, 28);
	printf("┛");
	*/

	gotoxy(97, 29);
	printf("PG ver. B202305301752");


	gotoxy(3, 2);
	printf("UI MAIN: 1.0");
	gotoxy(2, 29);
	printf("  원하시는 메뉴 번호를 입력하세요>>> ");

}

void find_UI_1_1()    // 길찾기 메인화면
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");

	gotoxy(20, 3);
	printf("******** ********* **      * *******     ********  ********     *     *******  \n");
	gotoxy(20, 4);
	printf("*            *     * *     * *     **    *      *  *      *    * *    *     ** \n");
	gotoxy(20, 5);
	printf("*******      *     *   *   * *     **    *  ** *   *      *   *****   *     **  \n");
	gotoxy(20, 6);
	printf("*            *     *     * * *     **    *      *  *      *  *     *  *     **  \n");
	gotoxy(20, 7);
	printf("*        ********* *      ** *******     *       * ******** *       * *******   \n");
	gotoxy(20, 8);


	gotoxy(3, 2);
	printf("UI Find Road: 1.1");

	gotoxy(10, 12);
	printf("MENU 번호는 출발지에 입력하세요");

	gotoxy(10, 17);
	printf("출발지를 입력하세요 >> ");

	gotoxy(10, 22);
	printf("도착지를 입력하세요 >> ");

}

void find_UI_1_2(char* str1, char* str2)    // 출발지 도착지 입력하면 확인문
{
	int i;

	gotoxy(28, 12);
	printf("         ");
	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("┃                                                           ┃");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 11);
	printf("┏");
	gotoxy(90, 11);
	printf("┓");
	gotoxy(30, 25);
	printf("┗");
	gotoxy(90, 25);
	printf("┛");

	gotoxy(42, 15);
	printf("출발지 >> %s 확인되었습니다. ", str1);

	gotoxy(42, 20);
	printf("도착지 >> %s 확인되었습니다. ", str2);

	gotoxy(32, 24);
	printf("입력한 정보가 맞으면 1 아니면 0을 누르세요 >> ");

}

void find_UI_1_3()    // 입력한거 최종출력 출력
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");

	gotoxy(20, 3);
	printf("******** ********* **      * *******     ********  ********     *     *******  \n");
	gotoxy(20, 4);
	printf("*            *     * *     * *     **    *      *  *      *    * *    *     ** \n");
	gotoxy(20, 5);
	printf("*******      *     *   *   * *     **    *  ** *   *      *   *****   *     **  \n");
	gotoxy(20, 6);
	printf("*            *     *     * * *     **    *      *  *      *  *     *  *     **  \n");
	gotoxy(20, 7);
	printf("*        ********* *      ** *******     *       * ******** *       * *******   \n");
	gotoxy(20, 8);


	gotoxy(3, 2);
	printf("UI Find Road: 1.3");

	gotoxy(10, 12);
	printf("출발지 >> ");

	gotoxy(10, 16);
	printf("도착지 >> ");

	gotoxy(10, 20);
	printf("경로   >> ");

	gotoxy(10, 24);
	printf("시간  >> ");
}

void admin_UI_2_1()   // 관리자 메인화면
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");


	// ㄴ
	gotoxy(30, 3);
	printf("     *      *******   **       **  *********  **      * \n");
	gotoxy(30, 4);
	printf("    * *     *     **  * *     * *      *      * *     * \n");
	gotoxy(30, 5);
	printf("   *****    *     **  *  *   *  *      *      *   *   * \n");
	gotoxy(30, 6);
	printf("  *     *   *     **  *   * *   *      *      *     * * \n");
	gotoxy(30, 7);
	printf(" *       *  *******   *    *    *  *********  *      ** \n");
	gotoxy(30, 8);



	gotoxy(10, 12);
	printf("1. 지역 추가");
	gotoxy(10, 16);
	printf("2. 지역 삭제");
	gotoxy(10, 20);
	printf("3. 돌아가기");
	gotoxy(3, 2);
	printf("UI ADMIN: 2.1");
	gotoxy(2, 29);
	printf("원하시는 메뉴 번호를 입력하세요>>> ");
}

void admin_UI_2_2()   // 지역추가 화면(작게 띄움)
{
	int i;


	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("┃                                                           ┃");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("━");



	gotoxy(30, 11);
	printf("┏");
	gotoxy(90, 11);
	printf("┓");
	gotoxy(30, 25);
	printf("┗");
	gotoxy(90, 25);
	printf("┛");
	gotoxy(30, 13);
	printf("┣");

	gotoxy(88, 12);
	printf("X");

	gotoxy(40, 20);
	printf("지역을 정상적으로 추가하였습니다...");
	gotoxy(76, 20);
	printf("3");
	Sleep(1000);
	gotoxy(76, 20);
	printf("2");
	Sleep(1000);
	gotoxy(76, 20);
	printf("1");
	Sleep(1000);

}

void admin_UI_2_3()    // 지역삭제 화면(작게 띄움)
{
	int i;


	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("┃                                                           ┃");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("━");



	gotoxy(30, 11);
	printf("┏");
	gotoxy(90, 11);
	printf("┓");
	gotoxy(30, 25);
	printf("┗");
	gotoxy(90, 25);
	printf("┛");
	gotoxy(30, 13);
	printf("┣");

	gotoxy(88, 12);
	printf("X");

	gotoxy(40, 20);
	printf("지역 정상적으로 삭제하였습니다...");
	gotoxy(76, 20);
	printf("3");
	Sleep(1000);
	gotoxy(76, 20);
	printf("2");
	Sleep(1000);
	gotoxy(76, 20);
	printf("1");
	Sleep(1000);
}

void record_UI_3_1()   // 최근기록 한번에 보여주는 화면
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");


	// ㄴ
	gotoxy(29, 3);
	printf(" ********  ********* ********* ********* ********  *******   \n");
	gotoxy(29, 4);
	printf(" *      *  *         *         *       * *      *  *     **   \n");
	gotoxy(29, 5);
	printf(" *  ** *   ********  *         *       * *  ** *   *     **  \n");
	gotoxy(29, 6);
	printf(" *      *  *         *         *       * *      *  *     **  \n");
	gotoxy(29, 7);
	printf(" *       * ********* ********* ********* *       * *******   \n");

	// 도움말 창

	gotoxy(81, 9);
	for (i = 0; i < 35; i++)
		printf("━");

	gotoxy(81, 9);
	printf("┏");
	gotoxy(116, 9);
	printf("┓");

	for (i = 0; i < 18; i++)
	{
		gotoxy(81, 10 + i);
		printf("┃\t\t\t\t   ┃\n");
	}

	gotoxy(81, 28);
	for (i = 0; i < 35; i++)
		printf("━");

	gotoxy(81, 28);
	printf("┗");
	gotoxy(116, 28);
	printf("┛");

	gotoxy(88, 11);
	printf("# 최근기록 유의 사항 #");

	gotoxy(84, 14);
	printf("가장 최근에 입력한 지역부터");
	gotoxy(84, 15);
	printf("오름차순으로 출력됩니다.");

	gotoxy(84, 18);
	printf("최근기록은 최근에 입력한 지역중");
	gotoxy(84, 19);
	printf("9개만 출력됩니다.");

	gotoxy(84, 22);
	printf("너무 오래된 기록또한 삭제될 수");
	gotoxy(84, 23);
	printf("있습니다.");


	gotoxy(16, 10);
	printf("출발지\t\t\t도착지\n");

	gotoxy(3, 2);
	printf("UI RC_RECORD: 3.1");
}

void bookmark_UI_4_1() // 즐찾 메인화면
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");

	// ㄴ
	gotoxy(20, 3);
	printf(" *******  ******** ******** *     **  **       **     *     ********  *     **   \n");
	gotoxy(20, 4);
	printf(" *      * *      * *      * *   **    * *     * *    * *    *      *  *   **     \n");
	gotoxy(20, 5);
	printf(" *******  *      * *      * * **      *  *   *  *   *****   *  ** *   * **       \n");
	gotoxy(20, 6);
	printf(" *      * *      * *      * *   **    *   * *   *  *     *  *      *  *   **     \n");
	gotoxy(20, 7);
	printf(" *******  ******** ******** *     **  *    *    * *       * *       * *     **   \n");
	gotoxy(20, 8);

	gotoxy(16, 12);
	printf("1. 즐겨찾기 조회 ");
	gotoxy(16, 16);
	printf("2. 즐겨찾기 추가");
	gotoxy(16, 20);
	printf("3. 즐겨찾기 삭제");
	gotoxy(16, 24);
	printf("4. 돌아가기");


	gotoxy(3, 2);
	printf("UI BOOKMARK: 4.1");
	gotoxy(2, 29);
	printf("원하시는 메뉴 번호를 입력하세요>>> ");
}

void bookmark_UI_4_2() // 즐찾한 목록 출력하는 화면
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");

	// ㄴ
	gotoxy(20, 3);
	printf(" *******  ******** ******** *     **  **       **     *     ********  *     **   \n");
	gotoxy(20, 4);
	printf(" *      * *      * *      * *   **    * *     * *    * *    *      *  *   **     \n");
	gotoxy(20, 5);
	printf(" *******  *      * *      * * **      *  *   *  *   *****   *  ** *   * **       \n");
	gotoxy(20, 6);
	printf(" *      * *      * *      * *   **    *   * *   *  *     *  *      *  *   **     \n");
	gotoxy(20, 7);
	printf(" *******  ******** ******** *     **  *    *    * *       * *       * *     **   \n");
	gotoxy(20, 8);

	gotoxy(16, 10);
	printf("즐겨찾기 목록");

	gotoxy(3, 2);
	printf("UI BOOKMARK: 4.2");
}

void bookmark_UI_4_3() // 즐찾 지역 추가 화면(작게 띄움)
{
	int i;


	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("┃                                                           ┃");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("━");



	gotoxy(30, 11);
	printf("┏");
	gotoxy(90, 11);
	printf("┓");
	gotoxy(30, 25);
	printf("┗");
	gotoxy(90, 25);
	printf("┛");
	gotoxy(30, 13);
	printf("┣");

	gotoxy(88, 12);
	printf("X");

	gotoxy(40, 20);
	printf("즐겨찾기를 정상적으로 추가하였습니다...");
	gotoxy(80, 20);
	printf("3");
	Sleep(1000);
	gotoxy(80, 20);
	printf("2");
	Sleep(1000);
	gotoxy(80, 20);
	printf("1");
	Sleep(1000);
}

void bookmark_UI_4_4() // 즐찾 지역 삭제 화면(작게 띄움)
{
	int i;

	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("┃                                                           ┃");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("━");



	gotoxy(30, 11);
	printf("┏");
	gotoxy(90, 11);
	printf("┓");
	gotoxy(30, 25);
	printf("┗");
	gotoxy(90, 25);
	printf("┛");
	gotoxy(30, 13);
	printf("┣");

	gotoxy(88, 12);
	printf("X");

	gotoxy(40, 20);
	printf("즐겨찾기를 정상적으로 삭제하였습니다...");
	gotoxy(80, 20);
	printf("3");
	Sleep(1000);
	gotoxy(80, 20);
	printf("2");
	Sleep(1000);
	gotoxy(80, 20);
	printf("1");
	Sleep(1000);
}

void admin_UI_2_2_1() // 관리자 지역추가 화면
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");


	// ㄴ
	gotoxy(30, 3);
	printf("     *      *******   **       **  *********  **      * \n");
	gotoxy(30, 4);
	printf("    * *     *     **  * *     * *      *      * *     * \n");
	gotoxy(30, 5);
	printf("   *****    *     **  *  *   *  *      *      *   *   * \n");
	gotoxy(30, 6);
	printf("  *     *   *     **  *   * *   *      *      *     * * \n");
	gotoxy(30, 7);
	printf(" *       *  *******   *    *    *  *********  *      ** \n");
	gotoxy(30, 8);

	gotoxy(10, 12);
	printf("★돌아가시려면 지역이름에 0을 입력해주세요★");

	gotoxy(10, 16);
	printf("추가할 지역의 이름을 입력하세요  >> ");
	//gotoxy(46, 16); 버퍼 좌표
	//printf("ss");

	gotoxy(10, 20);
	printf("추가할 지역의 X좌표를 입력하세요 >> ");
	//gotoxy(46, 20); 버퍼 좌표
	//printf("ss");

	gotoxy(10, 24);
	printf("추가할 지역의 Y좌표를 입력하세요 >> ");
	//gotoxy(46, 24); 버퍼 좌표
	//printf("ss");


	gotoxy(3, 2);
	printf("UI ADMIN: 2.2.1");
}

void admin_UI_2_3_1() //  관리자 지역삭제 화면
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");


	// ㄴ
	gotoxy(30, 3);
	printf("     *      *******   **       **  *********  **      * \n");
	gotoxy(30, 4);
	printf("    * *     *     **  * *     * *      *      * *     * \n");
	gotoxy(30, 5);
	printf("   *****    *     **  *  *   *  *      *      *   *   * \n");
	gotoxy(30, 6);
	printf("  *     *   *     **  *   * *   *      *      *     * * \n");
	gotoxy(30, 7);
	printf(" *       *  *******   *    *    *  *********  *      ** \n");
	gotoxy(30, 8);



	gotoxy(3, 2);
	printf("UI ADMIN: 2.2.1");
	gotoxy(2, 29);
	printf("삭제할 지역의 번호를 입력하세요 >> ");

	//gotoxy(37, 29); 버퍼좌표
	//printf("ss");
}

void bookmark_UI_4_3_1() // 즐찾 지역 추가 화면
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");

	// ㄴ
	gotoxy(20, 3);
	printf(" *******  ******** ******** *     **  **       **     *     ********  *     **   \n");
	gotoxy(20, 4);
	printf(" *      * *      * *      * *   **    * *     * *    * *    *      *  *   **     \n");
	gotoxy(20, 5);
	printf(" *******  *      * *      * * **      *  *   *  *   *****   *  ** *   * **       \n");
	gotoxy(20, 6);
	printf(" *      * *      * *      * *   **    *   * *   *  *     *  *      *  *   **     \n");
	gotoxy(20, 7);
	printf(" *******  ******** ******** *     **  *    *    * *       * *       * *     **   \n");
	gotoxy(20, 8);



	gotoxy(10, 13);
	printf("즐겨찾기에 추가할 지역을 입력하세요 >>");
	//gotoxy(49, 13); 버퍼좌표
	//printf("ss");

	gotoxy(3, 2);
	printf("UI BOOKMARK: 4.3.1");

}

void bookmark_UI_4_4_1() // 즐찾 지역 삭제 화면
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("━");
	for (i = 0; i < 28; i++)
		printf("┃\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t┃\n");
	for (i = 0; i < 120; i++)
		printf("━");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("━");

	gotoxy(1, 1);
	printf("┏");
	gotoxy(120, 1);
	printf("┓");
	gotoxy(1, 8);
	printf("┣");
	gotoxy(120, 8);
	printf("┫");
	gotoxy(1, 30);
	printf("┗");
	gotoxy(120, 30);
	printf("┛");

	// ㄴ
	gotoxy(20, 3);
	printf(" *******  ******** ******** *     **  **       **     *     ********  *     **   \n");
	gotoxy(20, 4);
	printf(" *      * *      * *      * *   **    * *     * *    * *    *      *  *   **     \n");
	gotoxy(20, 5);
	printf(" *******  *      * *      * * **      *  *   *  *   *****   *  ** *   * **       \n");
	gotoxy(20, 6);
	printf(" *      * *      * *      * *   **    *   * *   *  *     *  *      *  *   **     \n");
	gotoxy(20, 7);
	printf(" *******  ******** ******** *     **  *    *    * *       * *       * *     **   \n");
	gotoxy(20, 8);



	gotoxy(2, 29);
	printf("즐겨찾기에서 삭제할 지역의 번호를 입력하세요 >> ");

	//gotoxy(50, 29); 버퍼좌표
	//printf("ss");
	gotoxy(3, 2);
	printf("UI BOOKMARK: 4.4.1");
}

void Error_UI_1_0()
{
	int i;


	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("┃                                                           ┃");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("━");



	gotoxy(30, 11);
	printf("┏");
	gotoxy(90, 11);
	printf("┓");
	gotoxy(30, 25);
	printf("┗");
	gotoxy(90, 25);
	printf("┛");
	gotoxy(30, 13);
	printf("┣");

	gotoxy(88, 12);
	printf("X");

	gotoxy(50, 20);
	printf("잘못된 입력입니다...");
	gotoxy(71, 20);
	printf("3");
	Sleep(1000);
	gotoxy(71, 20);
	printf("2");
	Sleep(1000);
	gotoxy(71, 20);
	printf("1");
	Sleep(1000);
}

void Back_UI_1_1()
{
	int i;

	gotoxy(28, 12);
	printf("         ");

	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("┃                                                           ┃");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("━");


	gotoxy(30, 11);
	printf("┏");
	gotoxy(90, 11);
	printf("┓");
	gotoxy(30, 25);
	printf("┗");
	gotoxy(90, 25);
	printf("┛");
	gotoxy(30, 13);
	printf("┣");

	gotoxy(88, 12);
	printf("X");

	gotoxy(52, 19);
	printf("뒤로 돌아갑니다");
	gotoxy(88, 24);
	printf("3");
	Sleep(1000);
	gotoxy(88, 24);
	printf("2");
	Sleep(1000);
	gotoxy(88, 24);
	printf("1");
	Sleep(1000);
}

void End_UI_1_1()
{
	system("cls");
	int i;

	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("┃                                                           ┃");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("━");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("━");


	gotoxy(30, 11);
	printf("┏");
	gotoxy(90, 11);
	printf("┓");
	gotoxy(30, 25);
	printf("┗");
	gotoxy(90, 25);
	printf("┛");
	gotoxy(30, 13);
	printf("┣");

	gotoxy(88, 12);
	printf("X");

	gotoxy(88, 24);
	printf("5");

	gotoxy(49, 18);
	printf("프");
	Sleep(100);
	gotoxy(51, 18);
	printf("로");
	Sleep(100);
	gotoxy(53, 18);
	printf("그");
	Sleep(100);
	gotoxy(55, 18);
	printf("램");
	Sleep(100);
	gotoxy(57, 18);
	printf("을");
	Sleep(100);
	gotoxy(60, 18);
	printf("종");
	Sleep(100);
	gotoxy(62, 18);
	printf("료");
	Sleep(100);
	gotoxy(64, 18);
	printf("합");
	Sleep(100);
	gotoxy(66, 18);
	printf("니");
	Sleep(100);
	gotoxy(68, 18);
	printf("다");
	Sleep(100);

	gotoxy(88, 24);
	printf("4");

	Sleep(500);

	gotoxy(49, 19);
	printf("이");
	Sleep(100);
	gotoxy(51, 19);
	printf("용");
	Sleep(100);
	gotoxy(53, 19);
	printf("해");
	Sleep(100);
	gotoxy(55, 19);
	printf("주");
	Sleep(100);
	gotoxy(57, 19);
	printf("셔");
	Sleep(100);
	gotoxy(88, 24);
	printf("3");
	gotoxy(59, 19);
	printf("서");
	Sleep(100);
	gotoxy(62, 19);
	printf("감");
	Sleep(100);
	gotoxy(64, 19);
	printf("사");
	Sleep(100);
	gotoxy(66, 19);
	printf("합");
	Sleep(100);
	gotoxy(68, 19);
	printf("니");
	Sleep(100);
	gotoxy(70, 19);
	printf("다");
	Sleep(500);

	gotoxy(88, 24);
	printf("2");
	Sleep(1000);
	gotoxy(88, 24);
	printf("1");
	Sleep(1000);
	system("cls");
}