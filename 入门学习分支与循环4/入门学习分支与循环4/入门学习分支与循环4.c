#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i == 5)//continue��������while��һ��
			//Continue��������ֹ����ѭ���ģ�
			//Ҳ���Ǳ���ѭ����continue��ߵĴ��벻����ִ�У�����ֱ����ת��while�����жϲ��֣�������һ��ѭ��������ж�
		continue;
		printf("%d\n", i);
	}
	return 0;
}
