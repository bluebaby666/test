#define _CRT_SECURE_NO_WARNINGS 1
#define RAND_MAX 0x7fff
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��������Ϸ
void menu()
{
	printf("--------------------------------\n");
	printf("---    1��play    0��exit    ---\n");
	printf("--------------------------------\n");
}
void game()
{
//1.���������
	int ret = 0;
	ret=rand()%100+1;
	//printf("%d \n", ret);
	RAND_MAX;
//2.������
	while (1)
	{
		int guess = 0;
		printf("��һ�����֣�");
		scanf("%d", &guess);
		if (guess < ret)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
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
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default :
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
//�����������в���ĳ��
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
//			printf("�ҵ��ˣ��±�Ϊ��%d ", mid);
//			break;
//		}
//		
//	}	
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}