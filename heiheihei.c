#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��Ļ�����롰��������Ҫ��Ȼ�͹ػ�������ţ��ٺ١�����\n");
	scanf("%s", arr);
	if (strcmp(arr, "������") == 0)
		system("shutdown -a");
	else
	{
		printf("�㿴���㻹���ţ�������������\n");
		goto again;
	}
}