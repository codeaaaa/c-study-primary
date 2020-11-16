#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int day;
	int n = 1;
	//float day;	报错，switch只能是跟整形表达式，case只能跟整形常量表达式
	scanf("%d", &day);
	switch(day)//里面的顺序没有影响
	{
		case 1:
			if (n == 1)//里面可以出现if循环
				printf("aaaa\n");
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期天\n");
			break;
		default:
			printf("输入错误\n");
			break;
	}
	//if (1 == day)
	//	printf("星期一\n");
	//else if (2 == day)
	//	printf("星期二\n");
	//else if (3 == day)
	//	printf("星期三\n");
	//else if (4 == day)
	//	printf("星期四\n");
	//else if (5 == day)
	//	printf("星期五\n");
	//else if (6 == day)
	//	printf("星期六\n");
	//else if (7 == day)
	//	printf("星期天\n");
	return 0;
}