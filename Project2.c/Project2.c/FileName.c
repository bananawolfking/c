#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char password[20];
//	printf("�������룺");
//	scanf("%s", &password[20]);
//	printf("ȷ������(Y/N):t");
//	while (getchar() != '\n')//�ظ��Ļ�ȡ���뻺�����Ķ����ַ� 
//	{
//		;
//	}
//	if (('Y' == getchar()))
//		printf("ȷ�ϳɹ�");
//	else
//		printf("����������");
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
//	printf("�������룺");
//	scanf_s("%s",&password[20]) ;
//	printf("ȷ�����룺Y/N");
//	if(('Y'==getchar()))//getchar()��õ��ַ���'\n'���Բ���ʵ��Ч�� 
//	   printf("ȷ�ϳɹ�");
//	else
//	   printf("����������"); 
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
//			printf("�ҵ��ˣ��±�Ϊ%d", mid);
//			break;
//		}
//	}
//	if(left>right)
//		printf("û�ҵ�");
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