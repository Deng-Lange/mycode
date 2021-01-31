#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void swap(int n)
//{
//	int a[50], b[50];
//	int i;
//	printf("请输入第一个数组的元素（共%d个）：", n);
//	for (i = 0; i < n; i++){
//		scanf("%d", &a[i]);
//	}
//	printf("请输入第二个数组的元素（共%d个）：", n);
//	for (i = 0; i < n; i++){
//		scanf("%d", &b[i]);
//	}
//	for (i = 0; i < n; i++){
//		int t = a[i];
//		a[i] = b[i];
//		b[i] = t;
//	}
//	printf("输出交换后的第一个数组的元素（共%d个）：", n);
//	for (i = 0; i < n; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n输出交换后的第二个数组的元素（共%d个）：", n);
//	for (i = 0; i < n; i++){
//		printf("%d ", b[i]);
//	}
//}
//void main()
//{
//	int n;
//	printf("请输入想要交换的数组的元素的个数(0<n<50)：");
//	scanf("%d", &n);
//	swap(n);
//	printf("\n");
//}

//实现函数init()初始化数组为全0
//实现print()打印数组的每个元素
//实现reverse()函数完成数组元素的逆置。
//void Init(int arr[], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//void Print(int array[], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int array[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = array[left];
//		array[left] = array[right];
//		array[right] = tmp;
//		left++;
//		right--;
//	}
//}

//对整形数组的冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//冒泡排序的趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//排序-排成升序
//	//arr是数字
//	//数字传参的时候，数组名会发生降级
//	//数据名降级变成了数组首元素的地址
//	//数组传参实际上传的是数组首元素的地址
//	print_arr(arr, sz);
//
//	bubble_sort(arr, sz);//冒泡排序的方式
//
//	print_arr(arr, sz);
//	return 0;
//}