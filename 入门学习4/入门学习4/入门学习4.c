#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//常量
//#define定义的标识符常量
//枚举常量
//字面常量
#define MAX 10

//字面变量
//3;
//100;
//3.14;

//枚举常量
	//枚举		一一列举
	//性别：男，女
	//三原色：红，黄，蓝
	//星期：1，2，3，4，5，6，7
	//枚举关键字	enum
enum sex
{
	male,
	female,
};

enum color
{
	red,
	yellow,
	bule
};
int main()
{
	//const - 常属性
	//const int num1 = 30;	const修饰的常变量	变不了了
	//
	//本质属性还是变量，只不过具有了常属性而已
	int num1 = 10;
	printf("%d\n", num1);
	num1 = 20;
	printf("%d\n", num1);
	const int n = 10;
	//n是变量，但是又有常属性，所以我们说n是常变量
	//int arr[n] = { 0 };不行

	//#define定义的标识符常量
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);

	//枚举常量	enum
	enum sex s = female;//描述
	printf("%d\n", male);//0
	printf("%d\n", female);//1
	enum color cr = bule;
	cr = yellow;//改
	//red,yellow,bule本身的0,1,2没法改
	//枚举常量是没法改的，但他所创建的变量是可以改的
	return 0;
}

