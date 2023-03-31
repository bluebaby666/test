#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//冒泡升序函数
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = 0;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//二维数组
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[3][4] = { {1,2,3,4},{4,3,2,1} };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//一维数组
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n ", i, &arr[i]);
//	}
//	return 0;
//}
//描述第n个斐波那契数
//int Fib(int n)
//{
	/*if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);*/
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}