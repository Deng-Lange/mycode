#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include <windows.h>
#include <math.h>

//打印菱形
int main()
{
	int x = 9;//计数使用使打印空格方便
	for (int i = 0; i < 9; i++)//代表9行，循环9次
	{

		for (int j = x; j>0; j--)//打印空格，每次空格减少一个
		{
			printf(" ");
		}
		x--;//使打印的空格每次减少一个
		for (int m = 0; m <= i * 2; m++)//打印 * 每次增加两个
		{
			printf("*");
		}

		printf("\n");//换行

	}
	//开始打印倒三角   如果上面打印9行，下面要么比上面多一行，要么少一行 我这里是少一行，下面8行
	int l = 2;
	for (int i = 8; i >0; i--)//打印8行
	{
		for (int j = 0; j<l; j++)//打印空格
		{
			printf(" ");
		}
		l++;
		for (int m = 0; m<i * 2 - 1; m++)//打印*
		{
			printf("*");
		}
		printf("\n");
	}
	getchar();
	return 0;
}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和刚好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#define M 100000//对其宏定义可以将其修改成任意数
//int main()
//{
//	int i = 1;
//	printf("0到%d的水仙花数为:\n", M);
//	for (; i <= M; i++)
//	{
//		int count = 1;//水仙花数至少是一位
//		int temp = i;
//		int sum = 0;
//		while (temp / 10)//利用while循环判断该数的位数
//		{
//			count++;
//			temp /= 10;
//		}
//		temp = i;//重新给temp赋值，因为temp在while循环中已经被修改了
//		while (temp)//判断该数是否是水仙花数
//		{
//			sum += pow(temp % 10, count);//对temp求余是求它的每一位数，再利用pow函数对其每一位求n次方，n为它的位数
//			temp /= 10;//对temp除10是每次将它的最低位除去
//		}
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	system("pause");
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int count = 0;
//	int Sn = 0;
//	int tmp = 0;
//	printf("请输入需要前几项的和：\n");
//	scanf("%d", &count);
//	printf("请输入a：\n");
//	scanf("%d", &a);
//	for (int i = 0; i < count; i++)
//	{
//		tmp = tmp * 10 + a;
//		Sn += tmp;
//	}
//	printf("Sn=%d\n", Sn);
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容。
//void reverse(char *arr)
//{
//	char *left = arr;
//	char *right = arr + strlen(arr) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "Tong Deng";
//	printf("Before:%s\n", arr);
//	reverse(arr);
//	printf("After:%s\n", arr);
//	return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}