#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//INS����ģʽ���޸�ģʽ
//�Զ��庯��
ADD(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int a = 1;
	int b = 2;
	int sum = 0;
	sum = ADD(a, b);
	printf("%d\n", sum);
	//����
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };//����һ�����10������������
	char array2[10] = { 'a','b','c','d','f','g','h','i','j','k' };//����һ�����10���ַ�������
	int i = 0;
	while (i < 10)
	{
		printf("%d", array[i]);
		i++;
	}
	int a = 5 % 2;//ȡģ�õ�����
	printf("%d\n", a);
	return 0;
}