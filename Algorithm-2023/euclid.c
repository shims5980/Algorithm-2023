

//��Ŭ���� �ִ����� ���ȣ�� ���
int euclidRecursive(int a, int b)
{
	//1. If(b == 0) return a
	if (b == 0)
		return a;

	//2. return Euclid(b, a mod b)
	return euclidRecursive(b, a % b);
}

//��Ŭ���� �ִ����� �ݺ����� ���
int euclidRepeative(int a, int b)
{
	//1. IF a < b RETURN 0; // �Է�Ȯ��
	if (a < b)
		return 0;

	//2. INT bsav; // �ӽ� ���
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