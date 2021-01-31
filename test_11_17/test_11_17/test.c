#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//写一个宏，可以将一个整数的奇数位和偶数位交换
//#define CHANGE(num) ((((num) & 0xaaaaaaaa) >> 1) | (((num)& 0x55555555) << 1))  
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", CHANGE(num));
//	return 0;
//}

//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//#define OFFSETOF(sn, mn)   (size_t)&(((sn*)0)->mn)
/*
假设结构体的首地址从0开始
将0转换成结构体变量的地址，并指向它的成员
然后取这个成员的地址
最后将其转换成size_t类型
*/