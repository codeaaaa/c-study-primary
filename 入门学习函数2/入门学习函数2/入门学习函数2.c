#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
swap1(int x, int y)
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a = 1;
	int b = 2;
	printf("a=%d b=%d\n", a, b);
	swap1(a, b);//�޷�����
	printf("a=%d b=%d\n", a, b);
	//����ʱ���������ڲ�	��F11
	//�ı�x��y���ܸı�a,b	��Ϊ���ǲ���ͬһ��ռ�
	//int* pa = &a;//paָ�����	�������յ�ַ
	//*pa;//�����ò���

	swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}