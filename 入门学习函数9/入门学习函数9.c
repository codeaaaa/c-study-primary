#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//µÝ¹é

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	//printf("hehe\n");
	//main();
	//Õ»Òç³ö

	unsigned int num = 0;
	scanf("%d", &num);//1234
	//µÝ¹é
	print(num);
	//print(1234);
	//print(123)	4
	//print(12)  3   4
	//print(1)  2  3  4
	//
	return  0;
}
