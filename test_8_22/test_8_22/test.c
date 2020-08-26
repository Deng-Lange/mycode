#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
/*void table(int n)
{
	int x = 0;
	for (x = 1; x <= n; x++)
	{
		int y = 0;
		for (y = 1; y <= x; y++)
		{
			int z = 0;
			z = x*y;
			printf("%d*%d=%2d ", y, x, z);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	printf("请输入乘法表的行数：");
	scanf("%d", &n);
	table(n);
	return 0;
}*/

//实现一个函数来交换两个整数的内容。
/*void swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int x = 0, y = 0;
	printf("请输入两个整数：");
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("交换后的结果：%d %d\n", x, y);
}*/

//实现函数判断year是不是闰年。
/*int is_leap_year(int y)
{
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		return 1;
	else
		return 0;
}
int main()
{
	int y = 0;
	printf("请输入一个年份：");
	scanf("%d", &y);
	if (is_leap_year(y) == 1)
	{
		printf("%d是闰年\n", y);
	}
	else
	{
		printf("%d不是闰年\n", y);
	}
}*/

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
/*int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}*/