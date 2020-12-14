#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//每调用一次这个函数，就会将num的值增加1
void ADD(int* p)
{
	//*p++;//作用于p
	(*p)++;//作用于*p
}
int main()
{
	int num = 0;
	ADD(&num);
	printf("num = %d\n", num);//1
	ADD(&num);
	printf("num = %d\n", num);//2
	ADD(&num);
	printf("num = %d\n", num);//3


	int len = 0;
	len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen("abc"));//链式访问
	//把一个函数的返回值作为另一个函数的参数


	printf("%d", printf("%d", printf("%d", 43)));//4321
	//printf的返回值是打印在屏幕上字符的个数
	return 0;
