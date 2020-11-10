#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//宏的定义
#define max(X,Y) (X>Y?X:Y)


//函数的实现
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
	//函数
	int max1 = MAX(a, b);
	printf("max1 = %d\n", max1);
	//宏的方式
	int max2 = 0;
	max2 = max(a, b);
	//max = (a>b?a:b)
	printf("max2 = %d\n", max2);
	return 0;
}