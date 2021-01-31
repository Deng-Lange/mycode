#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//柔型数组的使用
//struct S1
//{
//	int num;
//	char arr[];
//};
//
//int main()
//{
//	struct S1* p = (struct S1*)malloc(sizeof(struct S1) + 6);
//	p->num = 100;
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		p->arr[i] = 'a'+i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", p->arr[i]);
//	}
//	//增加
//	struct S1* ptr = realloc(p, 14);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = 'x';
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//struct S2
//{
//	int num;
//	char* arr;
//};
//
//int main()
//{
//	struct S2* ps = (struct S2*)malloc(sizeof(struct S2));
//	ps->num = 100;
//	ps->arr = (char*)malloc(6*sizeof(char));
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		ps->arr[i] = 'a' + i;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	//增容
//	char* ptr = realloc(ps->arr, 10);
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	//
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = 'x';
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%c ", ps->arr[i]);
//	}
//	//释放
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//重写atoi函数
enum State
{
	VALID,
	INVALID
}state = VALID;

int my_atoi(const char* str)
{
	int flag = 0;
	state = INVALID;
	//空指针
	if (str == NULL)
		return 0;
	if (*str == '\0')
		return 0;
	//空白字符的处理
	while (isspace(*str))
	{
		str++;
	}
	//+-
	if (*str == '+')
	{
		flag = 1;
		str++;
	}
	else if (*str == '-')
	{
		flag = -1;
		str++;
	}
	
	long long ret = 0;
	while (isdigit(*str))
	{
		ret = ret * 10 + flag*(*str - '0');
		if (ret > INT_MAX || ret < INT_MIN)
		{
			ret = 0;
			return (int)ret;
		}
		str++;
	}
	if (*str == '\0')
	{
		state = VALID;
		return (int)ret;
	}
	return (int)ret;
}

int main()
{
	char* p = "  123@456";
	int ret = my_atoi(p);
	if (state == VALID)
	{
		printf("%d\n", ret);
	}
	else
	{
		printf("%d\n", ret);
	}
	return 0;
}