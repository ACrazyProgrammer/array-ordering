#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int array[10];
	int i = 0;
	printf("请输入数组的10个元素：");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &array[i]);
	}
	int x = 0;
	int min = array[0];
	for (x = 0; x < 10; x++)
	{
		for (i = x, min = array[x]; i < 10; i++)
		{
			if (min > array[i])
			{
				min = array[i];
				array[i] = array[x];
				array[x] = min;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", array[i]);
	}
	return 0;
}