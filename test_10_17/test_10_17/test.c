#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//模仿qsort的功能实现一个通用的冒泡排序
//void qsort(void *base,
//		   size_t num, 
//		   size_t width, 
//		   int (*compare)(const void *elem1, const void *elem2)
//		   );
////交换函数
//void _swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *(buf1 + i);
//		*(buf1 + i) = *(buf2 + i);
//		*(buf2 + i) = tmp;
//	}
//}
///*
//参数的含义：
//1.待排序的起始位置；
//2.元素个数；
//3.传入数组元素的大小；
//4.函数指针，接收待排序的两个元素的比较方法，传入的是两个元素的地址
//*/
//void bubble_sort(void* base, int sz, int width, 
//	             int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j<sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				//交换
//				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
////打印元素
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////比较两个整形元素的方法
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
////排序整形
//void test1()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
////比较结构体数组的方法
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return(((struct S*)e1)->age - ((struct S*)e2)->age);
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct S*)e1)->name, ((struct S*)e2)->name);
//}
//
////排序结构体数组
//void test2()
//{
//	struct S arr[] = { { "zhangsan", 20 }, { "lisi", 80 }, { "wangwu", 5 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
//}
//void test3()
//{
//	struct S arr[] = { { "zhangsan", 20 }, { "lisi", 80 }, { "wangwu", 5 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

/*
void* 的指针是无具体类型的指针,可以接收任意数据类型的地址
void* 的指针不能直接 +/- 整数的操作
void* 的指针不能直接解引用操作
*/

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
/*
例如：给定s1 =AABCD和s2=BCDAA，返回1;给定s1=abcd和s2=ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC
*/
//void Revolvo(char* s, int k) {
//	int len = strlen(s);
//	char* p;
//	char* q;
//	for (p = s + k - 1; p >= s; --p) {
//		for (q = p; q < p + len - k; ++q) {
//			char tmp = *q;
//			*q = *(q + 1);
//			*(q + 1) = tmp;
//		}
//	}
//}
//
//int Chack(char* s1, char* s2) {
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) {
//		return 0;
//	}
//	char* s;
//	int i;
//	for (i = 0; i <= len1; ++i) {
//		s = s1;
//		Revolvo(s, i);
//		if (strcmp(s, s2) == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main() {
//	char arr1[] = "abcde";
//	char arr2[] = "deabc";
//	if (Chack(arr1, arr2) == 1) {
//		printf("是旋转后的\n");
//	}
//	else {
//		printf("不是旋转后的\n");
//	}
//	system("pause");
//	return 0;
//}


//杨氏矩阵:矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
int Findnum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;//找右上角进行对比

	while (x <= row - 1 && y >= 0)//找右上角对比，最后对比的情况一直向左下角收缩。
	{
		if (arr[x][y] > k)//说明右上角的数比想要找的数字大，应该继续向左找
		{
			y--;
		}
		else if (arr[x][y] < k)//右上角的数字比要找的数字小，继续向下找
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	//循环完之后找不到，直接返回0
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 10;
	int ret = Findnum(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}