#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����n�Ľ׳�
int FACL1(int n)//����
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int FACL2(int n)//�ݹ�
{
	if (n <= 1)
		return 1;
	else
		return n * FACL2(n - 1);
}
int main()
{
	int n;
	int ret1;
	int ret2;
	scanf("%d", &n);
	ret1 = FACL1(n);//�����ķ���
	ret2 = FACL2(n);
	printf("%d\n", ret1);
	printf("%d\n", ret2);
	return 0;
}

