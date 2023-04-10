# 유클리드 최대공약수
### 재귀함수 호출 방법과 반복적인 방법

#### <문제 정의>
문제이름: 유클리드 최대공약수
문제설명: 주어진 두 숫자를 유클리드 최대공약수를 이용해 구하되 재귀함수 호출을 이용한 방법과 반복적인 방법 두가지로 구하시오.
문제예시: 임의의 두 개의 수를 지정하여 두 수의 최대공약수를 구한다.

#### <해결 아이디어>
(해결아이디어) : 반환값을 함수이름으로 지정하여 재귀함수를 호출하는 방법과 for문을 이용하여 반복적으로 수행하는 두가지 알고리즘을 만든다.

##### <알고리즘>
명칭: 유클리드 최대공약수
입력: 임의의 두 정수
출력: 최대공약수(정수)
처리순서 (재귀함수 호출):
1. b가 0이 되면 a의 값(최대공약수)을 반환한다.
2. 0이 아니면 a자리에 b를 대입하고 b자리에 a와 b의 나머지 수를 넣은 함수이름을 반환한다.
처리순서 (for문 이용한 반복):
1. a가 b보다 작으면 함수를 종료시킨다(종료조건)
2. a와 b자리에 다른 수를 넣어야 하므로 임시 기억할 변수를 선언한다.
3. b가 0이 될 때까지 반복한다.
4. 임시기억 변수에 b를, b에 a와 b의 나머지를, a에 임시기억 변수를 대입한다.
5. a를 리턴한다.

##### <코드 설계>
1. 자료 구조 정의
- 임의의 정수: num1, num2 - 정수
- 재귀함수 호출 함수 반환값: gcdRecursive – 정수
- 반복적인 방법 반환값: gcdRepeative - 정수

2. 함수 정의
- 기능: 두 임의의 정수를 입력받아 b가 0이 될 때까지 재귀적으로 함수를 호출한다.
- 프로토타입: int euclidRecursive(int a, int b);

- 기능: 두 임의의 정수를 입력받아 b가 0이 될 때까지 반복한다.
- 프로토타입: int euclidRepeative(int a, int b);

3. 테스트 케이스 설계
TC1. 1000보다 큰 임의의 수와 100보다 큰 임의의 수를 지정하여 재귀함수 호출방법과 반복적인 방법의 함수에 인자로 전달한다. 각 함수마다 걸리는 시간을 측정하기 위해 함수의 앞, 뒤로 시작변수와 끝나는 변수를 지정한다.

##### <C코드 구현 결과>
/* 버전 1 */

//유클리드 최대공약수 재귀호출 방법

int euclidRecursive(int a, int b)
{
	//1. If(b == 0) return a
	if (b == 0)
		return a;

	//2. return Euclid(b, a mod b)
	return euclidRecursive(b, a % b);
}

/* 버전 2 */

//유클리드 최대공약수 반복적인 방법

int euclidRepeative(int a, int b)
{
	//1. IF a < b RETURN 0; // 입력확인
	if (a < b)
		return 0;

	//2. INT bsav; // 임시 기억
	int temp = 0;

	//3. WHILE(b != 0)
	//	4. {
	//	bsav = b
	//		b = a mod b
	//		a = bsav
	//}
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	
	//5. RETURN a
	return a;
}

/* TC1. 테스트 함수 */

int testEuclid()
{
	clock_t start, finish;
	double duration;
	int gcdRecursive = 0, gcdRepeative = 0, num1 = 0, num2 = 0, times = 100000;
	srand(time(NULL));

	num1 = rand() % 1000 + 1000;
	num2 = rand() % 100 + 10;

	printf("안녕하세요. int형 데이터 타입 테스트함수 입니다.\n");

	start = clock();
	for (int i=0;i<times;i++)
	{
		gcdRecursive = euclidRecursive(num1, num2);
	}
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("재귀함수 호출을 이용한 %d와 %d의 최대공약수는 %d입니다.\n", num1, num2, gcdRecursive);
	printf("걸린 시간은 %lf초 입니다.\n", duration);

	start = clock();
	for (int i = 0; i<times; i++)
	{
		gcdRepeative = euclidRepeative(num1, num2);
	}
	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;

	printf("         반복을 이용한 %d와 %d의 최대공약수는 %d입니다.\n", num1, num2, gcdRepeative);
	printf("걸린 시간은 %lf초 입니다.\n", duration);

	return 0;
}
