#define _CRT_SECURE_NO_WARNINGS 1
#define RAND_MAX 0x7fff
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//猜数字游戏
void menu()
{
	printf("--------------------------------\n");
	printf("---    1、play    0、exit    ---\n");
	printf("--------------------------------\n");
}
void game()
{
//1.生成随机数
	int ret = 0;
	ret=rand()%100+1;
	//printf("%d \n", ret);
	RAND_MAX;
//2.猜数字
	while (1)
	{
		int guess = 0;
		printf("猜一个数字：");
		scanf("%d", &guess);
		if (guess < ret)
			printf("猜小了\n");
		else if (guess > ret)
			printf("猜大了\n");
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}
int main() 
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default :
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
//在有序数组中查找某数
//int main()
//{
//	int i = 7;
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			printf("找到了，下标为：%d ", mid);
//			break;
//		}
//		
//	}	
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}