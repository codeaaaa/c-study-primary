#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���ֲ���
//��һ������������в��Ҿ����ĳ����
//����ҵ��˷����±꣬�Ҳ�������-1


//�����������array��һ��ָ��	4���ֽ�
binary_search(int array[], int k, int sz)
{
	//int sz = sizeof(array) / sizeof(array[0]);//�����ڴ��ε�ʱ�򴫵ݵ�����Ԫ�ص�ַ
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (array[mid] < k)
		{
			left = mid - 1;
		}
		else if (array[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
		return -1;
	}
}
int main()
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(array) / sizeof(array[0]);
	int k = 7;
	int ret = binary_search(array, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���ָ��������\n");
	}
	else
	{
		printf("�±��ǣ�%d\n", ret);
	}
	return 0;
}
