#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��Ķ���
#define max(X,Y) (X>Y?X:Y)


//������ʵ��
MAX(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	//����
	int max1 = MAX(a, b);
	printf("max1 = %d\n", max1);
	//��ķ�ʽ
	int max2 = 0;
	max2 = max(a, b);
	//max = (a>b?a:b)
	printf("max2 = %d\n", max2);
	return 0;
}