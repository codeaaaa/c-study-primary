#define _CRT_SECURE_NO_WARNINGS
//字符串+转义字符+注释
#include<stdio.h>
#include<string.h>//使用库函数	strlen	引用头文件
int main()
{
	char array1[] = "abc";//数组
	char array2[] = { 'a','b','c' };
	char array3[] = { 'a','b','c' ,'\0'};//		\0是字符串的结束标志
	char array4[] = { 'a','b','c',0 };//		放0也可以	
	printf("%s\n", array1);//abc
	printf("%s\n", array2);//乱码
	printf("%s\n", array3);//abc
	printf("%s\n", array4);//abc
	//在计算字符串长度时，/0不算字符串长度，/0只是结束标志而已
	//	strlen - string length 计算字符串长度的
	printf("%d\n", strlen(array1));//3
	printf("%d\n", strlen(array2));//随机值

	//转义字符		转变原来的意思
	//		\n换行
	//\t	水平制表符	TAB
	//		\\表示一个反斜杠
	//
	printf("c:\test\32\test.c\n");
	printf("c:\\test\\32\\test.c\n");
	printf("%d\n", strlen("c:\test\32\test.c"));//13
	//\t	\32	算一个字符串长度
	//\32	32是2个八进制数字
	//32作为8进制数字代表的那个十进制数字，作为ASCII码值，对应的字符
	//32 ——>	10进制	26	——>作为ASCII码值对应的字符
	return 0;
}


//数据在计算机存储时，存储的是二进制
//ASCII		编码
//ASCII	码值
//		/0		0


//注释风格有两种
//C语言注释风格
/*xxxxxxxxxxx*/
//缺点：不能嵌套注释
//C++注释风格	//xxxxxxxxx
//注释
//代码中有不需要的代码可以直接删除，也可以注释掉
//代码中有些代码比较难懂，也可以注释