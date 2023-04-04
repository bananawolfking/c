#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void bubble(int* arr, int sz)
{
	int i = 0;
	int j = 0;
	int team = 0;
	int flag = 0;
	for (i = 0; i < sz - 1; i++)
	{
		j = 0;
		flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				team = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = team;
				flag = 1;
			}
			
		}
		if (flag == 0)
		{
			break;
		}
	}
}



int main()
{
	int x = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz);
	for (x = 0; x < sz; x++)
	{
		printf("%d", arr[x]);
	}
	return 0;
}