
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//δ�����ı�ʶ��
//����extern - 
extern int g_val;

int a = 2;//ȫ�ֱ���
//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ��������ᣬ����BUG
//���ֲ�������ȫ�ֱ���������һ��ʱ���ֲ���������
//�ֲ�����ֻ����������������,
//�����������������ڿ�ʼ�����������������ڽ���
int main()
{
	int a = 10;//�ֲ�����
	//����������
	int num1 = 0;
	int num2 = 0;
	int sum = 0;//�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	//���뺯�� -- scanf
	scanf("%d%d", &num1, &num2);//&ȡ��ַ����
	 sum = num1 + num2;
	printf("sum = %d\n", sum);
	printf("%d\n", a);
	printf("g_val=%d\n", g_val);
	return 0;
}