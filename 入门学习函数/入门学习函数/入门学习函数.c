#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
ADD(int x, int y)//�Զ��庯��
{
	int z = 0;
	z = x + y;
	return z;
}

MAX(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

int main()
{
	//strcpy - string  copy	- �ַ�������
	//strlen - string length - �ַ��������й�
	char array1[] = "abc";
	char array2[] = "##########";//abc\0######
	strcpy(array2, array1);//��array2 �����ݿ����� array1��ȥ
	printf("%s\n", array2);

	//memset - memory - �ڴ�	set - ����
	char array3[] = "hello world";
	memset(array3, '*', 5);
	printf("%s", array3);//***** world

	int a = 20;
	int b = 10;
	int max = MAX(a, b);
	int add = ADD(a, b);
	printf("%d\n", max);
	printf("%d\n", add);
	return 0;
}
