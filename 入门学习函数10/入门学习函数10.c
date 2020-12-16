#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
//递归
//大事化小
//my_strlen2("bit");
//1+my_strlen2("it");
//1+1+my_strlen2("t");
//1+1+1+my_streln2("");
//1+1+1+0
//3
int my_strlen2(char* str2)
{
	if (*str2 != '\0')
		return 1 + my_strlen2(str2 + 1);
	else
		return 0;
}

int main()
{
	char array[] = "hehe";
	int len = strlen(array);//求字符串长度
	printf("%d\n", len);//3
	int len2 = my_strlen(array);//数组传参传过去的不是整个数组，而是第一个元素的地址
	printf("%d\n", len2);
	int len3 = my_strlen2(array);
	printf("%d\n", len3);
	return 0;
}
