#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("屏幕上输入“我是猪”，要不然就关机，你别不信，嘿嘿。。。\n");
	scanf("%s", arr);
	if (strcmp(arr, "我是猪") == 0)
		system("shutdown -a");
	else
	{
		printf("你看，你还不信，哈哈哈哈哈哈\n");
		goto again;
	}
}