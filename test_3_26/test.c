//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("输入两个数：");
//	scanf("%d%d", &a, &b);
//	while (b!=0)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	if (b == 0)
//		printf("最大公约数为%d", a);
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("输入两个数：");
//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//		printf("最大公约数为%d", b);
//}




//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0, cost = 0, j = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		j = 0;
//		for (j = 2; j < i; j++)//j要从2开始除，要不然会出错
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			cost++;
//			printf("%d ", i);
//			
//		}
//	}
//	printf("\n%d", cost);
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0, cost = 0, j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		j = 0;
//		for (j = 2; j<=sqrt(i); j++)//一个非素数相当于两个数的积，所以用平方根来缩短范围
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j>sqrt(i))
//		{
//			cost++;
//			printf("%d ", i);
//			
//		}
//	}
//	printf("\n%d", cost);
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0, cost = 0, j = 0;
//	for (i = 101; i <= 200; i+=2)//偶数一定会被整除，所以只用奇数
//	{
//		j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			cost++;
//			printf("%d ", i);
//
//		}
//	}
//	printf("\n%d", cost);
//}




//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0, cost = 0, j = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			cost++;
//			printf("%d ", i);
//
//		}
//	}
//	printf("\n%d", cost);
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#define LEN 10
//int main()
//{
//	int m, n, i = 0, j = 0,  x = 0, cost = 0;
//	int s = 0;
//	int sushu(int m, int n);
//	scanf("%d%d", &m, &n);
//	sushu(m, n);
//	for (s = 0;s<cost; s++)
//	{
//		printf("%d", arr[s]);
//	}
//	return 0;
//		
//}
//int main()
//{
//	int m = 0, n = 0;
//	int sushu(int m, int n);
//	scanf("%d%d", &m, &n);
//	sushu(m, n);
//	return 0;
//}
//
//int sushu(int m, int n)
//{
//	int i = 0, j = 0;
//	int* arr = (int*)calloc(sizeof(int), LEN);
//	int x = 0;
//	int count = 0;
//	static int cost = 1;
//	if (arr == NULL)
//	{
//		printf("out of memory");
//		exit(EXIT_FAILURE);
//	}
//	if (m % 2 == 0)
//		m = m + 1;
//	if (m >= 2)
//	{
//		arr[0] = 2;
//	}
//	for (i = 3; i <= n; i += 2)
//	{
//		x = 0;
//		while(arr[x] > 0 && arr[x] <= sqrt(i))
//		{
//			if (i % arr[x] == 0)
//			{
//				break;
//			}
//			x++;
//		}
//		/*for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}*/
//		if (arr[x]==0||arr[x] > sqrt(i))
//		{
//			cost++;
//			printf("%d\n", i);
//			if (x >= count * LEN)
//			{
//				count++;
//				if (arr != NULL)
//				{
//					int* y = (int*)realloc(arr, LEN * sizeof(int) * count);
//					if (y == NULL)
//					{
//						printf("out of memory");
//						exit(EXIT_FAILURE);
//					}
//					else 
//					{
//						arr = y;
//					}
//				}
//			}
//			arr[x] = i;
//		}
//	}
//	printf("个数为：%d", cost);
//	free(arr);
//	arr = NULL;
//	return 0;
//}








