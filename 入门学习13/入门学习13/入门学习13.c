#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
struct BOOK
{
	char name[20];//�Զ�������
	short price;//100
};
//���ýṹ�崴��һ�������͵Ľṹ�����
int main()
{
	struct BOOK a = { "�Զ�������",100 };
	printf("������%s\n", a.name);
	printf("�۸�%d\n", a.price);
	a.price = 90;//price�Ǳ���������ֱ�Ӹ�
	printf("���ۺ�%d\n", a.price);
	struct BOOK* pb = &a;
	printf("%s\n", (*pb).name);//*pb = &a
	printf("%d\n", (*pb).price);
	//.		�ṹ�����.��Ա
	//->	�ṹ��ָ��->��Ա
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	//a.name = "C++";	�����������ǵ�ַ������ֱ�Ӹ�
	strcpy(a.name, "b");//strcpy - string copy - �ַ�������-�⺯�� - string.h
	printf("%s\n", a.name);
	return 0;
}