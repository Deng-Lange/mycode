#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

//ģ��ʵ��strncat
//char *my_strncat(char *dest, const char *src, int count)
//{
//	char *cp = dest;
//	assert(src && dest);
//	while (*dest != '\0')
//	{
//		*dest++;
//	}
//	while (count && *src)
//	{
//		*dest++ = *src++;
//		count--;
//	}
//	*dest = '\0';
//	return cp;
//}
//int main()
//{
//	int n;
//	char str1[100] = "Hello";
//	char *str2 = " world!";
//	printf("%s\n", str1);
//	printf("%s\n", str2);
//	printf("������ƴ���ַ��ĸ�����");
//	scanf("%d", &n);
//	printf("%s\n", my_strncat(str1, str2, n));
//	return 0;
//}

//ģ��ʵ��strncpy
//char *my_strncpy(char *des, const char *src, int count)
//{
//	char *cp = des;
//	assert(src && des);
//	while (count && (*des++ = *src++))
//	{
//		count--;
//	}
//	if (count > 0)
//	{
//		while (--count)
//		{
//			*des++ = '\0';
//		}
//	}
//	return cp;
//}
//int main()
//{
//	int n;
//	char str1[100] = { 0 };
//	char *str2 = "Hello world!";
//	printf("%s\n", str2);
//	printf("��������Ҫ�����ַ��ĸ�����");
//	scanf("%d", &n);
//	printf("%s\n", my_strncpy(str1, str2, n));
//	return 0;
//}

//�ҵ���
//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Σ���дһ�������ҳ�������ֻ����һ�ε����֡�
//void sort(int* a, int n)//ð������
//{
//	int j = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//void finddog(int* a, int n, int* num)
//{
//	sort(a, n);//��������
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n;)
//	{
//		if (a[i] == a[i + 1])//����������ȣ�������һ��
//		{
//			i += 2;//����һ��
//		}
//		else//����ȣ���¼��һ�����ݣ��ڶ���Ϊ��ʼλ��
//		{
//			num[j] = a[i];
//			i++;
//			j++;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 2, 1, 3 };
//	int num[2] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	finddog(arr, sz, num);
//	printf("%d ", num[0], num[1]);
//	return 0;
//}