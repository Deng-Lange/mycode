#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

//模拟实现strncat
//char *my_strncat(char *dest, const char *src, int count)
//{
//	char *cp = dest;
//	assert(src && dest);
//	while (*dest != '\0')
//	{
//		*dest++;
//	}
//	while (count && *src)
//	{
//		*dest++ = *src++;
//		count--;
//	}
//	*dest = '\0';
//	return cp;
//}
//int main()
//{
//	int n;
//	char str1[100] = "Hello";
//	char *str2 = " world!";
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("请输入拼接字符的个数：");
//	scanf("%d", &n);
//	printf("%s\n", my_strncat(str1, str2, n));
//	return 0;
//}

//模拟实现strncpy
//char *my_strncpy(char *des, const char *src, int count)
//{
//	char *cp = des;
//	assert(src && des);
//	while (count && (*des++ = *src++))
//	{
//		count--;
//	}
//	if (count > 0)
//	{
//		while (--count)
//		{
//			*des++ = '\0';
//		}
//	}
//	return cp;
//}
//int main()
//{
//	int n;
//	char str1[100] = { 0 };
//	char *str2 = "Hello world!";
//	printf("%s\n", str2);
//	printf("请输入需要复制字符的个数：");
//	scanf("%d", &n);
//	printf("%s\n", my_strncpy(str1, str2, n));
//	return 0;
//}

//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次，编写一个函数找出这两个只出现一次的数字。
//void sort(int* a, int n)//冒泡排序
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//void finddog(int* a, int n, int* num)
//{
//	sort(a, n);//首先排序
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n;)
//	{
//		if (a[i] == a[i + 1])//相邻两个相等，遍历下一组
//		{
//			i += 2;//跳过一组
//		}
//		else//不相等，记录第一个数据，第二个为起始位置
//		{
//			num[j] = a[i];
//			i++;
//			j++;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 2, 1, 3 };
//	int num[2] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
//	finddog(arr, sz, num);
//	printf("%d ", num[0], num[1]);
//	return 0;
//}