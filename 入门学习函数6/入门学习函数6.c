#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ÿ����һ������������ͻὫnum��ֵ����1
void ADD(int* p)
{
	//*p++;//������p
	(*p)++;//������*p
}
int main()
{
	int num = 0;
	ADD(&num);
	printf("num = %d\n", num);//1
	ADD(&num);
	printf("num = %d\n", num);//2
	ADD(&num);
	printf("num = %d\n", num);//3


	int len = 0;
	len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen("abc"));//��ʽ����
	//��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���


	printf("%d", printf("%d", printf("%d", 43)));//4321
	//printf�ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
	return 0;
