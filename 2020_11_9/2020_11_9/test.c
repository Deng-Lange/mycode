#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//����������ȥ��
//����n�����������У�Ҫ���������н���ȥ�ز�������νȥ�أ���ָ�����������ÿ���ظ����ֵ�������ֻ����������һ�γ��ֵ�λ�ã�ɾ������λ�á�
//#define MAX 1001
//int main()
//{
//	int a[MAX]; //����
//	int b[MAX] = { 0 }; //�������
//	int n, num;
//	int size = 0; //���д�Сʵʱ����
//	scanf("%d", &n);
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d", &num);
//		if (b[num] == 1)
//			continue;
//		a[size] = num;
//		b[num] = 1;
//		size += 1;
//	}
//	for (int i = 0; i<size; i++) //���ȥ������������
//		printf("%d ", a[i]);
//	printf("\n");
//	return 0;
//}

//�ж�������
int main(void)
{
	int a, b, c, temp;
	//printf("�����������ε������ߣ��ÿո������\n");
	scanf("%d %d %d", &a, &b, &c);
	//���� a >= b >= c
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	//�ж��������Ƿ����
	if (a <= 0 || b <= 0 || c <= 0 || b + c <= a)
	{
		printf("Not a triangle!\n");
		return 0;
	}
	if (a == b && b == c)
	{
		printf("Equilateral triangle!\n");
		return 0;
	}
	if (a == b || b == c || a==c)
	{
		printf("Isosceles triangle!\n");
		return 0;
	}
	printf("Ordinary triangle!\n");
	return 0;
}