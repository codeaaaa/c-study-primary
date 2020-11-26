#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//二分查找
//在一个有序的数组中查找具体的某个数
//如果找到了返回下标，找不到返回-1


//本质上这里的array是一个指针	4个字节
binary_search(int array[], int k, int sz)
{
	//int sz = sizeof(array) / sizeof(array[0]);//数组在传参的时候传递的是首元素地址
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
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("下标是：%d\n", ret);
	}
	return 0;
}
