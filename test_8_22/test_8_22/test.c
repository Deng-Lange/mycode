#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
#include<string.h>

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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
	printf("������˷����������");
	scanf("%d", &n);
	table(n);
	return 0;
}*/

//ʵ��һ�������������������������ݡ�
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
	printf("����������������");
	scanf("%d%d", &x, &y);
	swap(&x, &y);
	printf("������Ľ����%d %d\n", x, y);
}*/

//ʵ�ֺ����ж�year�ǲ������ꡣ
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
	printf("������һ����ݣ�");
	scanf("%d", &y);
	if (is_leap_year(y) == 1)
	{
		printf("%d������\n", y);
	}
	else
	{
		printf("%d��������\n", y);
	}
}*/

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
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