#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void test()
{

	//����static��a1��һ����̬�ľֲ������ˣ��������ڱ䳤��������
	//static����ȫ�ֱ������������С��ֻ�����Լ����ڵ�Դ�ļ�ʹ��
	//static���κ�����ȫ�ֱ���Ч��һ��

	//ÿ�ν������´���a1������a1���٣�����a������Զ��2
	//int a1 = 1;//a = 2	���
	static int a1; //a = 1 a = 2 a = 3 a = 4 a = 5 a = 6
	a1++;
	printf("a = %d\n", a1);
}
static int ADD(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 10;
	a = -2;
	//unsigned	�޷���
	unsigned int num1 = 1;
	//struct	�ṹ��ؼ���
	//tpyedef - ���Ͷ��� - �����ض���
	typedef unsigned int u_int;
	unsigned int num3 = 20;
	u_int num2 = 20;

	//static	��̬
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}