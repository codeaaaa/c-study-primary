#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
		//int ch = getchar();//getchar	����һ���ַ�
		//putchar(ch);//putchar	���һ���ַ�
		//printf("%c\n", ch);



		//int ch = 0;
		//while ((ch = getchar()) != EOF)//ֱ������EOF,�����޷�����
		////EOF	end of file		-1		�ļ�������־
		////����CTAL+Z		������ȡEOF	�������
		//{
		//	putchar(ch);
		//}

	int ch;
	char password[10] = { 0 };
	int ret;
	printf("��������");
	scanf("%s", password);//scanfֻ���ȡ�ո�ǰ��Ķ���
	//����������	'\n'
	//��ȡ	'\n'
	while ((ch = getchar() != '\n'))
	{
		;//�����
	};
	printf("��ȷ�ϣ�Y/N��");
	ret = getchar();//������\n	10	�س�
	if (ret == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("����ȷ��\n");
	}
	


	//ֻ������֣������ֲ����
	char ch2;
	while ((ch2 = getchar()) != EOF)
	{
		if (ch2 < '0' || ch2 > '9')//ASCII��ֵ��Ӧ��0��9����������
			continue;
		putchar(ch2);
	}
	return 0;
}
