#pragma once

typedef struct location {		// ������ �̸� X��ǥ Y��ǥ�� �����ϴ� ����ü(���� str �������� ������) 
	int index;
	char region[20];
	int x;
	int y;
}Location;

extern void main0();
extern void bookmark1();
extern void manager1();
extern void find1();

extern void file_read();                         // region ���� �д� �Լ� 
extern void print_distance();                      // ���� �� �Ÿ��� ����ϴ� �Լ� 
extern void distance_decide(Location P[]);             // ���� �� �Ÿ��� ���ϴ� �Լ� 
extern void distance_reset();                      // ���� �� �Ÿ��� �ʱ�ȭ�ϴ� �Լ� 
extern void floyd();                            // �ִ� ��� �˰��� 
extern void recent_path(char start[], char end[]);       // �ֱ� ��� �ؽ�Ʈ ���Ͽ� �����ϴ� �Լ� 
extern double distance_search(char start[], char end[]); // ���� �� �Ÿ��� ã���ִ� �Լ� 

extern void recent_path_watch(int menu);                     // �ֱ� ��� ����ϴ� �Լ� 
extern int region_addition();                        // ���� �߰��ϴ� �Լ� 
extern void region_print();                           // ���� ������ִ� �Լ� 
extern void bookmark_addtion(char book[]);               // ���ã�� ���� �߰� 
extern void bookmark_watch(int mneu);
extern void Error_UI_1_0();
extern void Back_UI_1_1();