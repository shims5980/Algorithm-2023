#define _CRT_SECURE_NO_WARNINGS  // ���־� ��Ʃ������� sacnf ���� �������ִ� ����
// UI

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define P 38
#define PP P+21
// �� �� �� �� �� �� �� �� �� �� ��
void gotoxy(int x, int y);
void main_UI();        // ���� ȭ��
void find_UI_1_1();    // ��ã�� ����ȭ��
void find_UI_1_2();    // ����� ������ �Է��ϸ� Ȯ�ι�
void find_UI_1_3();    // �Է��Ѱ� ������� ���
void admin_UI_2_1();   // ������ ����ȭ��

void admin_UI_2_2_1(); // ������ �����߰� ȭ��
void admin_UI_2_3_1(); // ������ �������� ȭ��

void admin_UI_2_2();    // �����߰� ȭ��Ȯ��(�۰� ���) ��
void admin_UI_2_3();    // �������� ȭ��Ȯ��(�۰� ���) ��

void record_UI_3_1();   // �ֱٱ�� �ѹ��� �����ִ� ȭ��
void bookmark_UI_4_1(); // ��ã ����ȭ��
void bookmark_UI_4_2(); // ��ã�� ��� ����ϴ� ȭ��

void bookmark_UI_4_3(); // ��ã ���� �߰� ȭ��Ȯ��(�۰� ���) ��
void bookmark_UI_4_4(); // ��ã ���� ���� ȭ��Ȯ��(�۰� ���) ��

void bookmark_UI_4_3_1(); // ��ã ���� �߰� ȭ��
void bookmark_UI_4_4_1(); // ��ã ���� ���� ȭ��

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
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");

	// ��
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
	printf("1. ��ã��");
	gotoxy(16, 16);
	printf("2. ���ã��");
	gotoxy(16, 20);
	printf("3. �ֱٱ��");
	gotoxy(16, 24);
	printf("4. ����");

	// ���� â
	/*
	gotoxy(81, 9);
	for (i = 0; i < 35; i++)
		printf("��");

	gotoxy(81, 9);
	printf("��");
	gotoxy(116, 9);
	printf("��");

	for (i = 0; i < 18; i++)
	{
		gotoxy(81, 10 + i);
		printf("��\t\t\t\t   ��\n");
	}

	gotoxy(81, 28);
	for (i = 0; i < 35; i++)
		printf("��");

	gotoxy(81, 28);
	printf("��");
	gotoxy(116, 28);
	printf("��");
	*/

	gotoxy(97, 29);
	printf("PG ver. B202305301752");


	gotoxy(3, 2);
	printf("UI MAIN: 1.0");
	gotoxy(2, 29);
	printf("  ���Ͻô� �޴� ��ȣ�� �Է��ϼ���>>> ");

}

void find_UI_1_1()    // ��ã�� ����ȭ��
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");

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
	printf("MENU ��ȣ�� ������� �Է��ϼ���");

	gotoxy(10, 17);
	printf("������� �Է��ϼ��� >> ");

	gotoxy(10, 22);
	printf("�������� �Է��ϼ��� >> ");

}

void find_UI_1_2(char* str1, char* str2)    // ����� ������ �Է��ϸ� Ȯ�ι�
{
	int i;

	gotoxy(28, 12);
	printf("         ");
	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("��                                                           ��");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 11);
	printf("��");
	gotoxy(90, 11);
	printf("��");
	gotoxy(30, 25);
	printf("��");
	gotoxy(90, 25);
	printf("��");

	gotoxy(42, 15);
	printf("����� >> %s Ȯ�εǾ����ϴ�. ", str1);

	gotoxy(42, 20);
	printf("������ >> %s Ȯ�εǾ����ϴ�. ", str2);

	gotoxy(32, 24);
	printf("�Է��� ������ ������ 1 �ƴϸ� 0�� �������� >> ");

}

void find_UI_1_3()    // �Է��Ѱ� ������� ���
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");

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
	printf("����� >> ");

	gotoxy(10, 16);
	printf("������ >> ");

	gotoxy(10, 20);
	printf("���   >> ");

	gotoxy(10, 24);
	printf("�ð�  >> ");
}

void admin_UI_2_1()   // ������ ����ȭ��
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");


	// ��
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
	printf("1. ���� �߰�");
	gotoxy(10, 16);
	printf("2. ���� ����");
	gotoxy(10, 20);
	printf("3. ���ư���");
	gotoxy(3, 2);
	printf("UI ADMIN: 2.1");
	gotoxy(2, 29);
	printf("���Ͻô� �޴� ��ȣ�� �Է��ϼ���>>> ");
}

void admin_UI_2_2()   // �����߰� ȭ��(�۰� ���)
{
	int i;


	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("��                                                           ��");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("��");



	gotoxy(30, 11);
	printf("��");
	gotoxy(90, 11);
	printf("��");
	gotoxy(30, 25);
	printf("��");
	gotoxy(90, 25);
	printf("��");
	gotoxy(30, 13);
	printf("��");

	gotoxy(88, 12);
	printf("X");

	gotoxy(40, 20);
	printf("������ ���������� �߰��Ͽ����ϴ�...");
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

void admin_UI_2_3()    // �������� ȭ��(�۰� ���)
{
	int i;


	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("��                                                           ��");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("��");



	gotoxy(30, 11);
	printf("��");
	gotoxy(90, 11);
	printf("��");
	gotoxy(30, 25);
	printf("��");
	gotoxy(90, 25);
	printf("��");
	gotoxy(30, 13);
	printf("��");

	gotoxy(88, 12);
	printf("X");

	gotoxy(40, 20);
	printf("���� ���������� �����Ͽ����ϴ�...");
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

void record_UI_3_1()   // �ֱٱ�� �ѹ��� �����ִ� ȭ��
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");


	// ��
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

	// ���� â

	gotoxy(81, 9);
	for (i = 0; i < 35; i++)
		printf("��");

	gotoxy(81, 9);
	printf("��");
	gotoxy(116, 9);
	printf("��");

	for (i = 0; i < 18; i++)
	{
		gotoxy(81, 10 + i);
		printf("��\t\t\t\t   ��\n");
	}

	gotoxy(81, 28);
	for (i = 0; i < 35; i++)
		printf("��");

	gotoxy(81, 28);
	printf("��");
	gotoxy(116, 28);
	printf("��");

	gotoxy(88, 11);
	printf("# �ֱٱ�� ���� ���� #");

	gotoxy(84, 14);
	printf("���� �ֱٿ� �Է��� ��������");
	gotoxy(84, 15);
	printf("������������ ��µ˴ϴ�.");

	gotoxy(84, 18);
	printf("�ֱٱ���� �ֱٿ� �Է��� ������");
	gotoxy(84, 19);
	printf("9���� ��µ˴ϴ�.");

	gotoxy(84, 22);
	printf("�ʹ� ������ ��϶��� ������ ��");
	gotoxy(84, 23);
	printf("�ֽ��ϴ�.");


	gotoxy(16, 10);
	printf("�����\t\t\t������\n");

	gotoxy(3, 2);
	printf("UI RC_RECORD: 3.1");
}

void bookmark_UI_4_1() // ��ã ����ȭ��
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");

	// ��
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
	printf("1. ���ã�� ��ȸ ");
	gotoxy(16, 16);
	printf("2. ���ã�� �߰�");
	gotoxy(16, 20);
	printf("3. ���ã�� ����");
	gotoxy(16, 24);
	printf("4. ���ư���");


	gotoxy(3, 2);
	printf("UI BOOKMARK: 4.1");
	gotoxy(2, 29);
	printf("���Ͻô� �޴� ��ȣ�� �Է��ϼ���>>> ");
}

void bookmark_UI_4_2() // ��ã�� ��� ����ϴ� ȭ��
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");

	// ��
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
	printf("���ã�� ���");

	gotoxy(3, 2);
	printf("UI BOOKMARK: 4.2");
}

void bookmark_UI_4_3() // ��ã ���� �߰� ȭ��(�۰� ���)
{
	int i;


	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("��                                                           ��");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("��");



	gotoxy(30, 11);
	printf("��");
	gotoxy(90, 11);
	printf("��");
	gotoxy(30, 25);
	printf("��");
	gotoxy(90, 25);
	printf("��");
	gotoxy(30, 13);
	printf("��");

	gotoxy(88, 12);
	printf("X");

	gotoxy(40, 20);
	printf("���ã�⸦ ���������� �߰��Ͽ����ϴ�...");
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

void bookmark_UI_4_4() // ��ã ���� ���� ȭ��(�۰� ���)
{
	int i;

	for (i = 11; i <= 24; i++)
	{
		gotoxy(30, i);
		printf("��                                                           ��");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("��");



	gotoxy(30, 11);
	printf("��");
	gotoxy(90, 11);
	printf("��");
	gotoxy(30, 25);
	printf("��");
	gotoxy(90, 25);
	printf("��");
	gotoxy(30, 13);
	printf("��");

	gotoxy(88, 12);
	printf("X");

	gotoxy(40, 20);
	printf("���ã�⸦ ���������� �����Ͽ����ϴ�...");
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

void admin_UI_2_2_1() // ������ �����߰� ȭ��
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");


	// ��
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
	printf("�ڵ��ư��÷��� �����̸��� 0�� �Է����ּ����");

	gotoxy(10, 16);
	printf("�߰��� ������ �̸��� �Է��ϼ���  >> ");
	//gotoxy(46, 16); ���� ��ǥ
	//printf("ss");

	gotoxy(10, 20);
	printf("�߰��� ������ X��ǥ�� �Է��ϼ��� >> ");
	//gotoxy(46, 20); ���� ��ǥ
	//printf("ss");

	gotoxy(10, 24);
	printf("�߰��� ������ Y��ǥ�� �Է��ϼ��� >> ");
	//gotoxy(46, 24); ���� ��ǥ
	//printf("ss");


	gotoxy(3, 2);
	printf("UI ADMIN: 2.2.1");
}

void admin_UI_2_3_1() //  ������ �������� ȭ��
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");


	// ��
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
	printf("������ ������ ��ȣ�� �Է��ϼ��� >> ");

	//gotoxy(37, 29); ������ǥ
	//printf("ss");
}

void bookmark_UI_4_3_1() // ��ã ���� �߰� ȭ��
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");

	// ��
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
	printf("���ã�⿡ �߰��� ������ �Է��ϼ��� >>");
	//gotoxy(49, 13); ������ǥ
	//printf("ss");

	gotoxy(3, 2);
	printf("UI BOOKMARK: 4.3.1");

}

void bookmark_UI_4_4_1() // ��ã ���� ���� ȭ��
{
	system("cls");
	int i;

	for (i = 0; i < 120; i++)
		printf("��");
	for (i = 0; i < 28; i++)
		printf("��\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t��\n");
	for (i = 0; i < 120; i++)
		printf("��");
	gotoxy(1, 8);
	for (i = 0; i < 120; i++)
		printf("��");

	gotoxy(1, 1);
	printf("��");
	gotoxy(120, 1);
	printf("��");
	gotoxy(1, 8);
	printf("��");
	gotoxy(120, 8);
	printf("��");
	gotoxy(1, 30);
	printf("��");
	gotoxy(120, 30);
	printf("��");

	// ��
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
	printf("���ã�⿡�� ������ ������ ��ȣ�� �Է��ϼ��� >> ");

	//gotoxy(50, 29); ������ǥ
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
		printf("��                                                           ��");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("��");



	gotoxy(30, 11);
	printf("��");
	gotoxy(90, 11);
	printf("��");
	gotoxy(30, 25);
	printf("��");
	gotoxy(90, 25);
	printf("��");
	gotoxy(30, 13);
	printf("��");

	gotoxy(88, 12);
	printf("X");

	gotoxy(50, 20);
	printf("�߸��� �Է��Դϴ�...");
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
		printf("��                                                           ��");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("��");


	gotoxy(30, 11);
	printf("��");
	gotoxy(90, 11);
	printf("��");
	gotoxy(30, 25);
	printf("��");
	gotoxy(90, 25);
	printf("��");
	gotoxy(30, 13);
	printf("��");

	gotoxy(88, 12);
	printf("X");

	gotoxy(52, 19);
	printf("�ڷ� ���ư��ϴ�");
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
		printf("��                                                           ��");
	}

	gotoxy(30, 11);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 13);
	for (i = 0; i < 60; i++)
		printf("��");

	gotoxy(30, 25);
	for (i = 0; i < 60; i++)
		printf("��");


	gotoxy(30, 11);
	printf("��");
	gotoxy(90, 11);
	printf("��");
	gotoxy(30, 25);
	printf("��");
	gotoxy(90, 25);
	printf("��");
	gotoxy(30, 13);
	printf("��");

	gotoxy(88, 12);
	printf("X");

	gotoxy(88, 24);
	printf("5");

	gotoxy(49, 18);
	printf("��");
	Sleep(100);
	gotoxy(51, 18);
	printf("��");
	Sleep(100);
	gotoxy(53, 18);
	printf("��");
	Sleep(100);
	gotoxy(55, 18);
	printf("��");
	Sleep(100);
	gotoxy(57, 18);
	printf("��");
	Sleep(100);
	gotoxy(60, 18);
	printf("��");
	Sleep(100);
	gotoxy(62, 18);
	printf("��");
	Sleep(100);
	gotoxy(64, 18);
	printf("��");
	Sleep(100);
	gotoxy(66, 18);
	printf("��");
	Sleep(100);
	gotoxy(68, 18);
	printf("��");
	Sleep(100);

	gotoxy(88, 24);
	printf("4");

	Sleep(500);

	gotoxy(49, 19);
	printf("��");
	Sleep(100);
	gotoxy(51, 19);
	printf("��");
	Sleep(100);
	gotoxy(53, 19);
	printf("��");
	Sleep(100);
	gotoxy(55, 19);
	printf("��");
	Sleep(100);
	gotoxy(57, 19);
	printf("��");
	Sleep(100);
	gotoxy(88, 24);
	printf("3");
	gotoxy(59, 19);
	printf("��");
	Sleep(100);
	gotoxy(62, 19);
	printf("��");
	Sleep(100);
	gotoxy(64, 19);
	printf("��");
	Sleep(100);
	gotoxy(66, 19);
	printf("��");
	Sleep(100);
	gotoxy(68, 19);
	printf("��");
	Sleep(100);
	gotoxy(70, 19);
	printf("��");
	Sleep(500);

	gotoxy(88, 24);
	printf("2");
	Sleep(1000);
	gotoxy(88, 24);
	printf("1");
	Sleep(1000);
	system("cls");
}