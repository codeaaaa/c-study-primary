#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//쳲���������
//1 1 2 3 5 8 13 21 34 55 ..........
//��������n��쳲���������ʱ��
//n<=2��1
//n>2	Fib(n-1)+Fib(n-2)

int Fib1(int n)//ջ���
//���ʺ��õݹ���
{
	if (n <= 2)
		return 1;
	else
		return Fib1(n - 1) + Fib1(n - 2);
}


int Fib2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}



int main()
{
	int n;
	int ret1;
	int ret2;
	scanf("%d", &n);
	ret1 = Fib1(n);
	printf("%d\n", ret1);
	ret2 = Fib2(n);
	printf("%d\n", ret2);
	return 0;
}
//void test(int n)//ջ���
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}
