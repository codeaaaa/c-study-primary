#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	//shutdown -s -t 60		60���ػ�
	//system() - ִ��ϵͳ����
	char input[] = { 0 };
	system("shutdown -s -t 6-");
again:
	printf("���Լ����ػ���������룺ȡ������ȡ���ػ�");
	scanf("%s", input);
	if (strcmp(input, "ȡ��") == 0)
	{
		system("shutdown -n");
	}
	else 
	{
		goto again;
	}
	return 0;
}
