#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//模拟实现strlen
////方法一
//size_t my_strlen(const char* str)
//{
//	int count = 0;//计数器
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////方法二
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
////方法三
//size_t my_strlen(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//模拟实现strcpy
char* my_strcpy(char *dest, const char*src)
{
	char* ret = dest;
	assert(dest!= NULL);
	assert(src!= NULL);
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "hello bit";
	//char arr2[] = { 'b', 'i', 't', '\0' };
	
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}