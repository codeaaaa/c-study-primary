#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct BOOK
{
	char name[20];//自定义数组
	short price;//100
};
//利用结构体创建一个该类型的结构体变量
int main()
{
	struct BOOK a = { "自定义数组",100 };
	printf("书名：%s\n", a.name);
	printf("价格：%d\n", a.price);
	a.price = 90;//price是变量，可以直接改
	printf("打折后：%d\n", a.price);
	struct BOOK* pb = &a;
	printf("%s\n", (*pb).name);//*pb = &a
	printf("%d\n", (*pb).price);
	//.		结构体变量.成员
	//->	结构体指针->成员
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	//a.name = "C++";	数组名本身是地址，不能直接改
	strcpy(a.name, "b");//strcpy - string copy - 字符串拷贝-库函数 - string.h
	printf("%s\n", a.name);
	return 0;
}