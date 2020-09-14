#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//交换两个变量（不创建临时变量）
int main()
{
	int a = 3;
	int b = 5;
	printf("a=%d b=%d\n", a, b);

	a = a^b;
	b = a^b;
	a = a^b;

	printf("a=%d b=%d\n", a, b);

	return 0;
}

//统计二进制中1的个数
//int count_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &m);
//	int ret = count_one(m);
//	printf("%d\n", ret);
//	return 0;
//}

//打印整数二进制的奇数位和偶数位
//void  Show(int a)
//{
//	int i = 0;
//	int tmp = 0;
//	printf("奇数位为:");
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		tmp = (a >> i) & 1;
//		printf("%d ", tmp);
//	}
//	printf("\n");
//	printf("偶数位为:");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//		tmp = (a >> i) & 1;
//		printf("%d ", tmp);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &m);
//	Show(m);
//	system("pause");
//	return 0;
//}

//求两个数二进制中不同位的个数
//int diff_bit(int m, int n)
//{
//	int tmp = m ^ n; //将两个数异或之后，将相同位清0，不同位全部为1   
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);//找m，n异或之后有多少个1；遇到一个1，就进行count++           
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	printf("Please enter two integers: ");
//	while (scanf("%d %d", &m, &n) == 2) //成功读取两个有效数字才可以进行下一步   
//	{
//		printf("%d\n", diff_bit(m, n));//调用函数  
//	}
//	system("pause");
//	return 0;
//}