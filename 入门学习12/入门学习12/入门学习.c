#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 10;
	int* p = &a;//p��һ��������ָ�����
	//&aȡ��ַ
	//��һ�ֱ�����������ŵ�ַ��-ָ�����
	printf("%p\n", &a);//00FAFDB8		һ����	%p	ʮ����������
	printf("%p\n", p);//00FAFDB8
	*p = 20;//*		�����ò�����
	printf("%d\n", a);//20
	char ch = 'a';
	char* cp = &ch;
	*cp = 'q';
	printf("%c\n", ch);
	double d = 3.14;
	double* pd = &d;
	*pd = 5.5;
	printf("%lf\n", d);
	printf("%lf\n", *pd);
	printf("%d\n", sizeof(pd));//32λ	4�ֽ�	64λ	8���ֽ�
	printf("%d\n", sizeof(int*));//32λ	4�ֽ�	64λ	8���ֽ�
	return 0;
}

