#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//模拟实现memmove
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest);
//	assert(src);
//	if (dest < src)
//	{
//		//前-->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后-->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//}

//模拟实现memcpy
//void* my_memcpy(void*dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest);
//	assert(src);
//
//	while (count--)
//	{
//		//拷贝一个字节
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest+1;
//		src = (char*)src+1;
//	}
//	return ret;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	//my_memcpy(arr1+2, arr1, 16);
//	//my_memmove(arr1 + 2, arr1, 16);
//
//	return 0;
//}

//模拟实现strstr
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1);
	assert(str2);

	const char* s1 = str1;
	const char* s2 = str2;
	const char* cp = str1;
	
	if (*s2 == '\0')
	{
		return (char*)str1;
	}

	while (*cp)
	{
		//一次匹配查找的过程
		s1 = cp;
		s2 = str2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cp;
		}
		cp++;
	}
	return NULL;
}

int main()
{
	char* str1 = "abbbcdef";
	char* str2 = "bbc";
	char* ret = my_strstr(str1, str2);
	printf("%s\n", ret);

	return 0;
}