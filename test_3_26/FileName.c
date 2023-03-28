//#include<stdio.h>
//int main() {//第五种
//	int i = 9;
//	int j = 0;
//	int arrr[100];
//	int count = 0;
//	for (i = 0; i < 100; ++i)
//	{
//		arrr[i] = i + 1;
//	}
//	for (i = 0; i < 100; ++i)
//	{
//		j = i - 1;//空过0、1、2
//		while (j > 1)
//		{
//			if (arrr[i] % j == 0)
//				arrr[i] = 0;
//			j = j - 1;
//		}
//	}
//	for (j = 1; j < 100; ++j)
//	{
//		if (arrr[j] != 0)
//		{
//			printf("%d是素数\n", arrr[j]);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	printf("%d\n", 0 % 2);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#define LEN 10
//
//#define LEN 10 //每次开辟空间的大小
//
//void  print_prime(int n)
//{
//	int* p = (int*)calloc(sizeof(int), LEN);
//	if (p == NULL)
//	{
//		printf("out of memory !\n");
//		exit(EXIT_FAILURE);
//	}
//
//	int i = 0, j = 1;
//	int count = 1;
//
//	if (n >= 2)  //第一个素数，输出并保存起来
//	{
//		printf("%d\t", 2);
//		p[0] = 2;
//	}
//
//	for (i = 3; i <= n; i += 2)
//	{
//		int k = 0;
//		while (p[k] > 0 && p[k] <= sqrt(i))   //试除保存的素数
//		{
//			if (i % p[k] == 0)
//				break;
//			k++;
//		}
//
//		if (!p[k] || (p[k] > sqrt(i)))  //将新求出的素数保存起来
//		{
//			printf("%d\t", i);
//			if (j >= (LEN * count))
//			{
//				count++;
//				p = realloc(p, sizeof(int) * LEN * count);
//				if (p == NULL)
//					exit(EXIT_FAILURE);
//			}
//			p[j] = i;
//			j++;
//		}
//
//	}
//	free(p);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	print_prime(num);
//
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LEN 10

int main()
{
	int m = 0, n = 0;
	int sushu(int m, int n);
	printf("求m和n之间的素数\n");
	printf("请输入m和n的值：");
	scanf("%d%d", &m, &n);
	system("cls");
	sushu(m, n);
	return 0;
}

int sushu(int m, int n)
{
	int i = 0, x= 0;
	int* arr = (int*)calloc(sizeof(int), LEN);
	int count = 0,cost = 1;
	if (arr == NULL)
	{
		printf("out of memory");
		exit(EXIT_FAILURE);
	}
	if (m % 2 == 0)//从奇数开始
		m = m + 1;
	if (m >= 2)//给第一个arr赋值
	{
		arr[0] = 2;
	}
	for (i = 3; i <= n; i += 2)//求新的素数
	{
		x = 0;
		while (arr[x] > 0 && arr[x] <= sqrt(i))
		{
			if (i % arr[x] == 0)
			{
				break;
			}
			x++;
		}
		if (arr[x] == 0 || arr[x] > sqrt(i))//输出素数并且保存一部分
		{
			if (i >= m)
			{
				printf("%d\n", i);
				cost++;
			}
			if (x >= count * LEN)//增加arr的内存
			{
				count++;
				if (arr != NULL)
				{
					int* y = (int*)realloc(arr, LEN * sizeof(int) * count);
					if (y == NULL)
					{
						printf("out of memory");
						exit(EXIT_FAILURE);
					}
					else
					{
						arr = y;
					}
				}
			}
			arr[x] = i;
		}
	}
	printf("总数为：%d", cost);
	free(arr);
	arr = NULL;
	return 0;
}