#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����
//#define����ı�ʶ������
//ö�ٳ���
//���泣��
#define MAX 10

//�������
//3;
//100;
//3.14;

//ö�ٳ���
	//ö��		һһ�о�
	//�Ա��У�Ů
	//��ԭɫ���죬�ƣ���
	//���ڣ�1��2��3��4��5��6��7
	//ö�ٹؼ���	enum
enum sex
{
	male,
	female,
};

enum color
{
	red,
	yellow,
	bule
};
int main()
{
	//const - ������
	//const int num1 = 30;	const���εĳ�����	�䲻����
	//
	//�������Ի��Ǳ�����ֻ���������˳����Զ���
	int num1 = 10;
	printf("%d\n", num1);
	num1 = 20;
	printf("%d\n", num1);
	const int n = 10;
	//n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//int arr[n] = { 0 };����

	//#define����ı�ʶ������
	int arr[MAX] = { 0 };
	printf("%d\n", MAX);

	//ö�ٳ���	enum
	enum sex s = female;//����
	printf("%d\n", male);//0
	printf("%d\n", female);//1
	enum color cr = bule;
	cr = yellow;//��
	//red,yellow,bule�����0,1,2û����
	//ö�ٳ�����û���ĵģ������������ı����ǿ��Ըĵ�
	return 0;
}

