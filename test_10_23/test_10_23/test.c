#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdio.h>
#include <assert.h>

//ģ��ʵ��strcmp
//int my_strcmp(const char*s1, const char* s2)
//{
//	assert(s1);
//	assert(s2);
//
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//int main()
//{
//	int ret = my_strcmp("abcz", "abcdef");
//	//printf("%d\n", ret);
//	if (ret < 0)
//	{
//		printf("С��\n");
//	}
//	else if (ret == 0)
//	{
//		printf("����\n");
//	}
//	else if (ret>0)
//	{
//		printf("����\n");
//	}
//}

////ģ��ʵ��strcat
//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//1. ��Ŀ�ĵؿռ��'\0'
//	while (*dest)
//	{
//		dest++;
//	}
//	//2. ��������
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello ";
//	//my_strcat(arr1, "world");
//	//printf("%s\n", arr1);
//	printf("%s\n", my_strcat(arr1, "world"));
//	return 0;
//}

//ģ��ʵ��strstr
//char *my_strstr(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//
//	char *cp = (char*)str1;
//	char *substr = (char *)str2;
//	char *s1 = NULL;
//
//	if (*str2 == '\0')
//		return NULL;
//
//	while (*cp)
//	{
//		s1 = cp;
//		substr = str2;
//		while (*s1 && *substr && (*s1 == *substr))
//		{
//			s1++;
//			substr++;
//		}
//		if (*substr == '\0')
//			return cp;
//		cp++;
//	}
//}
//int main()
//{
//	char arr1[20] = "hello world";
//	printf("%s\n", my_strstr(arr1, "world"));
//	return 0;
//}

//�ַ�������
//void left_move(char* str, int n)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *str;//�ѵ�һ���ַ�������
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;//�ѵ�һ���ַ��������һ��λ��
//	}
//}
//int main()
//{
//	////����left_move����
//	//char arr[] = "abcdef";
//	//left_move(arr, 3);
//	//printf("%s\n", arr);
//	//����һ���ж�arr2�Ƿ���arr1����������
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		left_move(arr1, 1);
//		if (strcmp(arr1, arr2) == 0)
//		{
//			printf("YES\n");
//			break;
//		}
//	}
//	if (i == len)
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//���������ж�arr2�Ƿ���arr1����������
int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "ab";
	if (strlen(arr1) != strlen(arr2))
	{
		printf("NO\n");
		return 0;
	}
	strncat(arr1, arr1, 6);
	char* ret = strstr(arr1, arr2);//�ж�arr2�Ƿ���arr1���Ӵ�
	if (ret == NULL)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
}