#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//递归与迭代-n的阶乘
int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int Fac2(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac2(n - 1);
}
int main()
{
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	ret = Fac1(n);
	printf("%d\n", ret);
}
//计算字符串的长度
//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "verygood";
//	/*int len = strlen(arr);
//	printf("len=%d\n", len);*/
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//调用一次函数num+1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//定义函数的有序数组的二分查找
//int binary_search(int arr[],int i,int sz)
//{
//	
//	int left = 0;
//	int right = sz - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (i < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (i > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, i, sz);
//	if (ret == -1)
//		printf("找不到！");
//	else
//	{
//		printf("找到啦,下标是： %d\n", ret);
//	}
//	return 0;
//}
//定义函数的判断闰年
//int get_year(int i)
//{
//	if ((i % 4 == 0) && i % 100 != 0 || (i % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(get_year(year)==1)
//			printf("%d ",year);
//	}
//	return 0;
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= n - 1; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//交换两个整型变量的内容
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 520;
//	int b = 1314;
//	printf("a=%d b=%d\n", a, b);
//	swap(&a,&b);
//	printf("a=%d b=%d\n", a,b);
//	return 0;
//}
//void swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{ 
//	int a = 13;
//	int b = 14;
//	printf("a=%d b=%d\n", a, b);
//	swap(a, b);
//	printf("a=%d b=%d\n", a,b);
//	return 0;
//}
//自定义个最大值函数
//int MAX(int x, int y)
//{
//	if (x >= y)
//		return x;
//	if (x < y)
//		return y;
//}
//int main()
//{
//	int a = 33;
//	int b = 4;
//	int max=MAX(a,b);
//	printf("max=%d\n", max);
//	return 0;
//}
//memset的用法：内存设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '-', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//strcpy的用法:字符串拷贝
//int main()
//{
//	char arr1[] = "我最棒";
//	char arr2[] = "你最棒";
//	strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}