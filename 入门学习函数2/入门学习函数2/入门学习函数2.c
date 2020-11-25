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
	swap1(a, b);//无法交换
	printf("a=%d b=%d\n", a, b);
	//调试时进到函数内部	按F11
	//改变x，y不能改变a,b	因为他们不是同一块空间
	//int* pa = &a;//pa指针变量	用来接收地址
	//*pa;//解引用操作

	swap2(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}