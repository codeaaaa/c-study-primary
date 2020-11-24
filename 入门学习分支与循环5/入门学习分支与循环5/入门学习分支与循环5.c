#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	//shutdown -s -t 60		60秒后关机
	//system() - 执行系统命令
	char input[] = { 0 };
	system("shutdown -s -t 6-");
again:
	printf("电脑即将关机，如果输入：取消，就取消关机");
	scanf("%s", input);
	if (strcmp(input, "取消") == 0)
	{
		system("shutdown -n");
	}
	else 
	{
		goto again;
	}
	return 0;
}
