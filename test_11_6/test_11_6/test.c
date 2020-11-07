#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//求最小公倍数
//方法一：
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = a;
//	while (1)
//	{
//		if (i % a == 0 && i % b == 0)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("%d", i);
//  return 0;
//}
//方法二：效率更高
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	int tmp = a;
//	while (i)
//	{
//		if (tmp * i % a == 0 && tmp * i % b == 0)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("%d", tmp * i);
//	return 0;
//}

//题目要求：
//I like beijing.
//I ekil .gnijieb
//beijing. like I

//字符串的逆序
void reverse(char*left, char*right)
{
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void revserse_string(char* str)
{
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (*str)
	{
		char* start = str;
		char* end = str;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		//逆序单词
		reverse(start, end - 1);
		if (*end != '\0')
			str = end + 1;
		else
			str = end;
	}
	reverse(left, right);
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);
	revserse_string(arr);
	printf("%s", arr);
	return 0;
}