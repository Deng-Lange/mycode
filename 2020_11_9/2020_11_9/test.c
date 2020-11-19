#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//序列中整形去重
//输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
//#define MAX 1001
//int main()
//{
//	int a[MAX]; //序列
//	int b[MAX] = { 0 }; //检测数组
//	int n, num;
//	int size = 0; //序列大小实时更新
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d", &num);
//		if (b[num] == 1)
//			continue;
//		a[size] = num;
//		b[num] = 1;
//		size += 1;
//	}
//	for (int i = 0; i<size; i++) //输出去重排序后的序列
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}

//判断三角形
int main(void)
{
	int a, b, c, temp;
	//printf("请输入三角形的三条边，用空格隔开：\n");
	scanf("%d %d %d", &a, &b, &c);
	//排序： a >= b >= c
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	//判断三角形是否成立
	if (a <= 0 || b <= 0 || c <= 0 || b + c <= a)
	{
		printf("Not a triangle!\n");
		return 0;
	}
	if (a == b && b == c)
	{
		printf("Equilateral triangle!\n");
		return 0;
	}
	if (a == b || b == c || a==c)
	{
		printf("Isosceles triangle!\n");
		return 0;
	}
	printf("Ordinary triangle!\n");
	return 0;
}