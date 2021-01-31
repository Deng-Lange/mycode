#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//模拟实现库函数strlen
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(NULL != str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int  main()
//{
//	char  arr[] = "hello world";
//	int ret = my_strlen(arr);
//	printf("字符串长度为：%d\n", ret);
//	return 0;
//}

//模拟实现库函数strcpy
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "byebye";
//	char arr2[20] = "hello";
//	char* p = NULL;
//	//函数的链式访问
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}

//调整奇数偶数顺序
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
void Switch(int *arr, int num)//调整数组里元素奇数都位与偶数前
{
	int *start = arr;
	int *end = arr + num - 1;
	while (start < end)
	{
		while (start < end && (*start & 1))
		{
			start++;
		}
		while (start< end && (!(*end & 1)))
		{
			end--;
		}
		if (start < end)
		{
			*start ^= *end;
			*end ^= *start;//使用异或来交换两值
			*start ^= *end;
			start++;
			end--;
		}
	}

	for (int i = 0; i < num; i++)
		printf("%d ", arr[i]);
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Switch(arr, num);
	return 0;
}