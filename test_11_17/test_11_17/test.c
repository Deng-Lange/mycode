#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//дһ���꣬���Խ�һ������������λ��ż��λ����
//#define CHANGE(num) ((((num) & 0xaaaaaaaa) >> 1) | (((num)& 0x55555555) << 1))  
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", CHANGE(num));
//	return 0;
//}

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//#define OFFSETOF(sn, mn)   (size_t)&(((sn*)0)->mn)
/*
����ṹ����׵�ַ��0��ʼ
��0ת���ɽṹ������ĵ�ַ����ָ�����ĳ�Ա
Ȼ��ȡ�����Ա�ĵ�ַ
�����ת����size_t����
*/