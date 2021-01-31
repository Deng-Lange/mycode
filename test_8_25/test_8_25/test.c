#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//递归和非递归分别实现求第n个斐波那契数
//例如：输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//递归方式
int Fib(int n)
{
	int count = 0;
	if (n == 3)
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}
//非递归方式
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
}

//编写一个函数实现n的k次方，使用递归实现。
//int power(int n, int k)
//{
//	if (k < 0) {
//		k = -k;
//		return  1 / (n*power(n, k - 1));
//	}
//	else if (k == 0) {
//		return 1;
//	}
//	else if (k>0) {
//		return n * power(n, k - 1);
//	}
//}
//int main()
//{
//	int n;
//	int k;
//	printf("请输入底数和指数: \n");
//	scanf("%d %d", &n, &k);
//	int ret = power(n, k);
//	printf("%d^%d=%lf\n", n, k, ret);
//	system("pause");
//	return 0;
//
//}

////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int DigitSum(int n)
//{
//	if (n <= 0)
//		return 0;
//	else if (n > 0 && n < 9)
//		return n;
//	else
//		return (n % 10) + DigitSum(n / 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}

//编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//int my_strlen(char* str)
//{
//	int count = 0;//计数器-统计字符的个数
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char temp = arr[0];
//	int n = my_strlen(arr);
//	arr[0] = arr[n - 1];
//	arr[n - 1] = '\0';
//	int m = my_strlen(arr + 1);
//	if (m > 1)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[n - 1] = temp;
//}
//int main()
//{
//	char  arr[20] = { 0 };
//	scanf("%s", arr);
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//递归和非递归分别实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;//计数器
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	return ret;
//}
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//递归方式实现打印一个整数的每一位
//void print_num(int n){
//	if (n<10){
//		printf("%d ",n);
//	}
//	else
//	{
//		print_num(n / 10);
//		printf("%d\n", n % 10);
//	}
//}
//int main(){
//	int n;
//	printf("请输入一个整数:\n");
//	scanf("%d", &n);
//	print_num(n);
//	system("pause");
//	return 0;
//}

//递归练习
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Fun(n);
//	printf("%d\n", n);
//	return 0;
//}