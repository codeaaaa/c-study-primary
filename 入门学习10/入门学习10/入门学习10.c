#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void test()
{

	//加了static，a1是一个静态的局部变量了，生命周期变长，不销毁
	//static修饰全局变量，作用域变小，只能在自己所在的源文件使用
	//static修饰函数于全局变量效果一致

	//每次进来重新创建a1，出来a1销毁，所以a出来永远是2
	//int a1 = 1;//a = 2	五个
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
	//unsigned	无符号
	unsigned int num1 = 1;
	//struct	结构体关键字
	//tpyedef - 类型定义 - 类型重定义
	typedef unsigned int u_int;
	unsigned int num3 = 20;
	u_int num2 = 20;

	//static	静态
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}