//数据类型					字节	打印
//char		字符类型数据	1		%c
//short		短整型			2		%
//int		整形			4		%d	有符号的十进制整数
//long		长整形			4		%
//long long	更长整形		8		%
//float		单精度浮点型	4		%f
//double	双精度浮点型	8		%f
//									%p	以地址的形式打印
//									%x	打印16进制数字
//八个比特位等于一个字节，一个比特位可以存放1或0
//bit	比特位
//kb	兆B		8个bit
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