#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
		//int ch = getchar();//getchar	接收一个字符
		//putchar(ch);//putchar	输出一个字符
		//printf("%c\n", ch);



		//int ch = 0;
		//while ((ch = getchar()) != EOF)//直接输入EOF,程序无法结束
		////EOF	end of file		-1		文件结束标志
		////输入CTAL+Z		程序会获取EOF	程序结束
		//{
		//	putchar(ch);
		//}

	int ch;
	char password[10] = { 0 };
	int ret;
	printf("输入密码");
	scanf("%s", password);//scanf只会读取空格前面的东西
	//缓冲区还有	'\n'
	//读取	'\n'
	while ((ch = getchar() != '\n'))
	{
		;//空语句
	};
	printf("请确认（Y/N）");
	ret = getchar();//接收了\n	10	回车
	if (ret == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("放弃确认\n");
	}
	


	//只输出数字，非数字不输出
	char ch2;
	while ((ch2 = getchar()) != EOF)
	{
		if (ch2 < '0' || ch2 > '9')//ASCII码值对应的0和9，不是数字
			continue;
		putchar(ch2);
	}
	return 0;
}
