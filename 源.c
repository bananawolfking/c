//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//
//int binary_search(int arr[], int k, int sz)
//{
//
//	
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
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
//	int k = 7;
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("�Ҳ���ָ��������\n");
//	else
//		printf("�±�Ϊ%d", ret);
//	return 0;
//}

#include<stdio.h>

int my_strlen(char* n)
{
	if (*n != '\0')
	{
		return 1 + my_strlen(n + 1);
	}
	return 0;
}


int main()
{
	char arr[] = { "bit"};
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}