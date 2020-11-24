#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
ADD(int x, int y)//自定义函数
{
	int z = 0;
	z = x + y;
	return z;
}

MAX(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

int main()
{
	//strcpy - string  copy	- 字符串拷贝
	//strlen - string length - 字符串长度有关
	char array1[] = "abc";
	char array2[] = "##########";//abc\0######
	strcpy(array2, array1);//将array2 的内容拷贝到 array1里去
	printf("%s\n", array2);

	//memset - memory - 内存	set - 设置
	char array3[] = "hello world";
	memset(array3, '*', 5);
	printf("%s", array3);//***** world

	int a = 20;
	int b = 10;
	int max = MAX(a, b);
	int add = ADD(a, b);
	printf("%d\n", max);
	printf("%d\n", add);
	return 0;
}
