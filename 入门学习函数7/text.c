#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"ADD.h"
//��������
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = ADD(a, b);
	printf("%d\n", sum);
	return 0;
}