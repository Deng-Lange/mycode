#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>

//ģ��ʵ�ֿ⺯��strlen
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
//	printf("�ַ�������Ϊ��%d\n", ret);
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strcpy
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
//	//��������ʽ����
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}

//��������ż��˳��
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
void Switch(int *arr, int num)//����������Ԫ��������λ��ż��ǰ
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
			*end ^= *start;//ʹ�������������ֵ
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