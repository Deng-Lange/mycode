#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//�ݹ鷽ʽ
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
//�ǵݹ鷽ʽ
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

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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
//	printf("�����������ָ��: \n");
//	scanf("%d %d", &n, &k);
//	int ret = power(n, k);
//	printf("%d^%d=%lf\n", n, k, ret);
//	system("pause");
//	return 0;
//
//}

////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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

//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//int my_strlen(char* str)
//{
//	int count = 0;//������-ͳ���ַ��ĸ���
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

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//int my_strlen(char* str)
//{
//	int count = 0;//������
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

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
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

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//	printf("������һ������:\n");
//	scanf("%d", &n);
//	print_num(n);
//	system("pause");
//	return 0;
//}

//�ݹ���ϰ
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