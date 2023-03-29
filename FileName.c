#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//int main()
//{
//	float a = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//
//		if (i % 2 == 0)
//		{
//			a -= 1.0/i;
//		}
//		else a +=1.0/i;
//
//	}
//	printf("%f\n", a);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a = 0 ,m = 0, n = 0;
//	for (m = 1; m <= 9; m++)
//	{
//		 n = 1;
//		for (n = 1; n<=m; n++)
//		{
//			a = n * m;
//			printf("%d*%d= %-2d    ", n, m, a);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//int main()
//{
//	int game(int input);
//	void open();
//	srand((unsigned int)time(NULL) * 10);
//	int a ,x= 1;
//	do
//	{
//		open();
//		scanf("%d", &a);
//		switch(a)
//		{
//		case 1:
//			game( x);
//		case 0:
//				break;
//		default:
//				printf("输入错误\n");
//		}
//	} while (a);
//	return 0;
//}
//
//void open()
//{
//	printf("***********************************\n");
//	printf("****输入1开始游戏 输入0退出游戏****\n");
//	printf("***********************************\n");
//}
//
//int game(int input)
//{
//	int num;
//	int con = 1;
//	num = rand() % 100 + 1;
//	printf("随机数在1-100之间，请猜测大小\n");
//	printf("请输入一个数->");
//	while (1)
//	{
//		scanf("%d", &input);
//		if (num > input)
//		{
//			printf("小了\n");
//			con++;
//		}
//		else if (num < input)
//		{
//			printf("大了\n");
//			con++;
//		}
//		else
//		{
//			printf("恭喜你答对了\n");
//			break;
//		}
//		switch (con)
//		{
//		case 4:
//		{
//			printf("行不行啊\n");
//			break;
//		}
//		case 6:
//		{
//			printf("看来还需要学习\n");
//			break;
//		}
//		case 8:
//		{
//			printf("不会吧不会吧，有人九次都没找到\n");
//			break;
//		}
//		}	
//	}
//	return 0;
//}

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int main()
{
	int a = 0;
	int i = 0;
	int e = 0;
	for (e = 0; e < 6; e++)
	{
		srand((unsigned int)time(NULL));
		i = 0;
		for (i = 1; i <= 5; i++)
		{
			a = rand(3);
			printf("%d   ", a);
			Sleep(1000);
			
		}
		printf("\n");
	}
	
	return 0;
}

/*(unsigned int)time(NULL)*/
