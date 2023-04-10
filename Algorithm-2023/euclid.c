

//유클리드 최대공약수 재귀호출 방법
int euclidRecursive(int a, int b)
{
	//1. If(b == 0) return a
	if (b == 0)
		return a;

	//2. return Euclid(b, a mod b)
	return euclidRecursive(b, a % b);
}

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