#define _CRT_SECURE_NO_WARNINGS
void test(int n)//ջ���
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	test(1);
	return 0;
}

