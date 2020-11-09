#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
int main()
{
	//&&	逻辑与		非0为真，0为假
	//||	逻辑或
	int a = 0;
	int b = 5;
	int c = a && b;
	printf("%d\n", c);//0
	int d = a || b;
	printf("%d\n", d);//1
	//条件操作符
	//exp1 ?  exp2 : exp3		三目操作符
	int max2 = 0;
	int a2 = 10;
	int b2 = 20;
	max2 = (a2 > b2 ? a2 : b2);
	printf("%d\n", max2);
	//两段代码等价
	int a1 = 10;
	int b1 = 20;
	int max = 0;
	if (a1 > b1)
		max = a1;
	else
		max = b1;
	printf("%d\n", max);
	int array[10] = { 0 };
	//array[0];		[]	下标引用操作符
	int sum = ADD(a, b);//()函数调用操作符
	return 0;
}