#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int pit(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int rat = 0;
//	scanf("%d", &n);
//	rat = pit(n);
//	printf("%d", rat);
//	return 0;
//}


//#include<stdio.h>//韩罗塔问题
//
//int Hanoi(int n)
//{
//	if (n > 1)
//	{
//		return 2 * Hanoi(n - 1)+1;
//	}
//	else
//		return 1;
//}
//int Hanoi1(int m)
//{
//	int x = 1;
//	while (m > 1)
//	{
//		x = 2 * x + 1;
//		m--;
//	}
//	return x;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret = Hanoi1(a);
//	printf("%d", ret);
//	return 0;
//}


//
//#include<stdio.h>//青蛙跳台阶问题
//
//int Frog(int n)
//{
//	if (n > 2)
//	{
//		return Frog(n - 1) + Frog(n - 2);
//	}
//	else
//		return 3;
//}
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	scanf("%d", &a);
//	ret = Frog(a);
//	printf("%d", ret);
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i = 0;
	int x = 0;
	int pen;
	int a = 1;
	int b = 1;
	int j = 1;
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("out of memory");
		exit(EXIT_FAILURE);
	}
	p[0] = 2;
	for (i = 3; i < 200; i += 2)
	{
		x = 0;
		x = 0;
		while (p[x]>0 && p[x]<=sqrt(i))
		{
			pen = i % p[x];
			if (pen == 0)
				break;
			x++;
		}
		if (!p[x] || p[x] > sqrt(i))
		{
			a++;
			if (a >= 10 * b)
			{
				b++;
				int* y = (int*)realloc(p, 10 * sizeof(int) * b);
				if (y == NULL)
				{
					printf("out of memory");
					exit(EXIT_FAILURE);
				}
				else
				{
					p = y;
				}
			}
			p[j] = i;
			j++;
			printf("%d   ", i);
		}
	}






	return 0;
}