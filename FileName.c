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
//				printf("�������\n");
//		}
//	} while (a);
//	return 0;
//}
//
//void open()
//{
//	printf("***********************************\n");
//	printf("****����1��ʼ��Ϸ ����0�˳���Ϸ****\n");
//	printf("***********************************\n");
//}
//
//int game(int input)
//{
//	int num;
//	int con = 1;
//	num = rand() % 100 + 1;
//	printf("�������1-100֮�䣬��²��С\n");
//	printf("������һ����->");
//	while (1)
//	{
//		scanf("%d", &input);
//		if (num > input)
//		{
//			printf("С��\n");
//			con++;
//		}
//		else if (num < input)
//		{
//			printf("����\n");
//			con++;
//		}
//		else
//		{
//			printf("��ϲ������\n");
//			break;
//		}
//		switch (con)
//		{
//		case 4:
//		{
//			printf("�в��а�\n");
//			break;
//		}
//		case 6:
//		{
//			printf("��������Ҫѧϰ\n");
//			break;
//		}
//		case 8:
//		{
//			printf("����ɲ���ɣ����˾Ŵζ�û�ҵ�\n");
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
