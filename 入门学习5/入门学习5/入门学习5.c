#define _CRT_SECURE_NO_WARNINGS
//�ַ���+ת���ַ�+ע��
#include<stdio.h>
#include<string.h>//ʹ�ÿ⺯��	strlen	����ͷ�ļ�
int main()
{
	char array1[] = "abc";//����
	char array2[] = { 'a','b','c' };
	char array3[] = { 'a','b','c' ,'\0'};//		\0���ַ����Ľ�����־
	char array4[] = { 'a','b','c',0 };//		��0Ҳ����	
	printf("%s\n", array1);//abc
	printf("%s\n", array2);//����
	printf("%s\n", array3);//abc
	printf("%s\n", array4);//abc
	//�ڼ����ַ�������ʱ��/0�����ַ������ȣ�/0ֻ�ǽ�����־����
	//	strlen - string length �����ַ������ȵ�
	printf("%d\n", strlen(array1));//3
	printf("%d\n", strlen(array2));//���ֵ

	//ת���ַ�		ת��ԭ������˼
	//		\n����
	//\t	ˮƽ�Ʊ��	TAB
	//		\\��ʾһ����б��
	//
	printf("c:\test\32\test.c\n");
	printf("c:\\test\\32\\test.c\n");
	printf("%d\n", strlen("c:\test\32\test.c"));//13
	//\t	\32	��һ���ַ�������
	//\32	32��2���˽�������
	//32��Ϊ8�������ִ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	//32 ����>	10����	26	����>��ΪASCII��ֵ��Ӧ���ַ�
	return 0;
}


//�����ڼ�����洢ʱ���洢���Ƕ�����
//ASCII		����
//ASCII	��ֵ
//		/0		0


//ע�ͷ��������
//C����ע�ͷ��
/*xxxxxxxxxxx*/
//ȱ�㣺����Ƕ��ע��
//C++ע�ͷ��	//xxxxxxxxx
//ע��
//�������в���Ҫ�Ĵ������ֱ��ɾ����Ҳ����ע�͵�
//��������Щ����Ƚ��Ѷ���Ҳ����ע��