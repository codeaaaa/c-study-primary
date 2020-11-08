#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//INS覆盖模式或修改模式
//自定义函数
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
	//数组
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };//定义一个存放10个整数的数组
	char array2[10] = { 'a','b','c','d','f','g','h','i','j','k' };//定义一个存放10给字符的数组
	int i = 0;
	while (i < 10)
	{
		printf("%d", array[i]);
		i++;
	}
	int a = 5 % 2;//取模得到余数
	printf("%d\n", a);
	return 0;
}