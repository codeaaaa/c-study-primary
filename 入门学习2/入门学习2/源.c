//��������					�ֽ�	��ӡ
//char		�ַ���������	1		%c
//short		������			2		%
//int		����			4		%d	�з��ŵ�ʮ��������
//long		������			4		%
//long long	��������		8		%
//float		�����ȸ�����	4		%f
//double	˫���ȸ�����	8		%f
//									%p	�Ե�ַ����ʽ��ӡ
//									%x	��ӡ16��������
//�˸�����λ����һ���ֽڣ�һ������λ���Դ��1��0
//bit	����λ
//kb	��B		8��bit
//mb	1024kb	
//gb	1024mb
//tb	1024tb
//pb	
#include <stdio.h>
int main()
{
	int age = 20;
	printf("%d\n", age);
	long num = 100;
	printf("%d\n", num);
	float f = 50;
	printf("%f\n", f);//50.000000
	double d = 3.14;
	printf("%f\n", d);//3.140000
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	return 0;
}