#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
//void qsort(void *base,
//		   size_t num, 
//		   size_t width, 
//		   int (*compare)(const void *elem1, const void *elem2)
//		   );
////��������
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
//�����ĺ��壺
//1.���������ʼλ�ã�
//2.Ԫ�ظ�����
//3.��������Ԫ�صĴ�С��
//4.����ָ�룬���մ����������Ԫ�صıȽϷ����������������Ԫ�صĵ�ַ
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
//				//����
//				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
////��ӡԪ��
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
////�Ƚ���������Ԫ�صķ���
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
////��������
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
////�ȽϽṹ������ķ���
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
////����ṹ������
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
void* ��ָ�����޾������͵�ָ��,���Խ��������������͵ĵ�ַ
void* ��ָ�벻��ֱ�� +/- �����Ĳ���
void* ��ָ�벻��ֱ�ӽ����ò���
*/

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
/*
���磺����s1 =AABCD��s2=BCDAA������1;����s1=abcd��s2=ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC
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
//		printf("����ת���\n");
//	}
//	else {
//		printf("������ת���\n");
//	}
//	system("pause");
//	return 0;
//}


//���Ͼ���:�����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
int Findnum(int arr[3][3], int k, int row, int col)
{
	int x = 0;
	int y = col - 1;//�����Ͻǽ��жԱ�

	while (x <= row - 1 && y >= 0)//�����ϽǶԱȣ����Աȵ����һֱ�����½�������
	{
		if (arr[x][y] > k)//˵�����Ͻǵ�������Ҫ�ҵ����ִ�Ӧ�ü���������
		{
			y--;
		}
		else if (arr[x][y] < k)//���Ͻǵ����ֱ�Ҫ�ҵ�����С������������
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	//ѭ����֮���Ҳ�����ֱ�ӷ���0
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 10;
	int ret = Findnum(arr, k, 3, 3);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else
	{
		printf("û�ҵ�\n");
	}
	return 0;
}