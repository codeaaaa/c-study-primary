#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//是素数返回1，不是素数返回0
is_prime(int n)
{
	int j = 0;
	//2 - n-1
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}
