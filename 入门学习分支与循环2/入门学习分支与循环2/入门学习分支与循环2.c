#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int day;
	int n = 1;
	//float day;	����switchֻ���Ǹ����α��ʽ��caseֻ�ܸ����γ������ʽ
	scanf("%d", &day);
	switch(day)//�����˳��û��Ӱ��
	{
		case 1:
			if (n == 1)//������Գ���ifѭ��
				printf("aaaa\n");
			printf("����һ\n");
			break;
		case 2:
			printf("���ڶ�\n");
			break;
		case 3:
			printf("������\n");
			break;
		case 4:
			printf("������\n");
			break;
		case 5:
			printf("������\n");
			break;
		case 6:
			printf("������\n");
			break;
		case 7:
			printf("������\n");
			break;
		default:
			printf("�������\n");
			break;
	}
	//if (1 == day)
	//	printf("����һ\n");
	//else if (2 == day)
	//	printf("���ڶ�\n");
	//else if (3 == day)
	//	printf("������\n");
	//else if (4 == day)
	//	printf("������\n");
	//else if (5 == day)
	//	printf("������\n");
	//else if (6 == day)
	//	printf("������\n");
	//else if (7 == day)
	//	printf("������\n");
	return 0;
}