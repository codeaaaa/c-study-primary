#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)//continue的作用与while中一致
			//Continue是用于终止本次循环的，
			//也就是本次循环中continue后边的代码不会再执行，而是直接跳转到while语句的判断部分，进行下一次循环的入口判断
		continue;
		printf("%d\n", i);
	}
	return 0;
}
