#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char password[20];
//	printf("输入密码：");
//	scanf("%s", &password[20]);
//	printf("确认密码(Y/N):t");
//	while (getchar() != '\n')//重复的获取输入缓冲区的多余字符 
//	{
//		;
//	}
//	if (('Y' == getchar()))
//		printf("确认成功");
//	else
//		printf("请重新输入");
//}
//#include<stdio.h>

//int main()
//{
//	int i, n, s=1;
//	
//	scanf(" %d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		s = s * i;
//	}
//	printf("%d", s);
//	return 0;
//}
//int main()
//{
//	int i, n, d = 0;
//	int s = 1;
//
//	scanf(" %d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		s = s * i;
//		d = d + s;
//	}
//	printf("%d,%d", s,d);
//	return 0;
//}
//#include<stdio.h>
//#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	char password[20];
//	printf("输入密码：");
//	scanf_s("%s",&password[20]) ;
//	printf("确认密码：Y/N");
//	if(('Y'==getchar()))//getchar()获得的字符是'\n'所以不能实现效果 
//	   printf("确认成功");
//	else
//	   printf("请重新输入"); 
//}




//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int mid,a;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left=0, right=sz;
//	scanf("%d", &a);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (a > arr[mid])
//			left = mid + 1;
//		else if (a < arr[mid])
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	if(left>right)
//		printf("没找到");
//}

#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "banana wolf";
	char arr2[] = "           ";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
}