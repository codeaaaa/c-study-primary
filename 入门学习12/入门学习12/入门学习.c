#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 10;
	int* p = &a;//p是一个变量，指针变量
	//&a取地址
	//有一种变量是用来存放地址的-指针变量
	printf("%p\n", &a);//00FAFDB8		一样的	%p	十六进制数据
	printf("%p\n", p);//00FAFDB8
	*p = 20;//*		解引用操作符
	printf("%d\n", a);//20
	char ch = 'a';
	char* cp = &ch;
	*cp = 'q';
	printf("%c\n", ch);
	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	printf("%d\n", sizeof(pd));//32位	4字节	64位	8个字节
	printf("%d\n", sizeof(int*));//32位	4字节	64位	8个字节
	return 0;
}

