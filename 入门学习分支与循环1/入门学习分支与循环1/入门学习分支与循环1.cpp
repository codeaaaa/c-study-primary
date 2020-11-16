#define _CRT_SECURE_NO_
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 1)
			printf("hehe\n");
	//else	缩进只是让代码更整洁
		else
			printf("haha\n");
	return 0;

}//什么都不输出
//else只与同框中离得最近的未匹配的if进行匹配