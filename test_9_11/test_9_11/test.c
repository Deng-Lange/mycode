#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

//����������������������ʱ������
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

//ͳ�ƶ�������1�ĸ���
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
//	printf("������һ��������\n");
//	scanf("%d", &m);
//	int ret = count_one(m);
//	printf("%d\n", ret);
//	return 0;
//}

//��ӡ���������Ƶ�����λ��ż��λ
//void  Show(int a)
//{
//	int i = 0;
//	int tmp = 0;
//	printf("����λΪ:");
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		tmp = (a >> i) & 1;
//		printf("%d ", tmp);
//	}
//	printf("\n");
//	printf("ż��λΪ:");
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
//	printf("������һ��������\n");
//	scanf("%d", &m);
//	Show(m);
//	system("pause");
//	return 0;
//}

//���������������в�ͬλ�ĸ���
//int diff_bit(int m, int n)
//{
//	int tmp = m ^ n; //�����������֮�󣬽���ͬλ��0����ͬλȫ��Ϊ1   
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);//��m��n���֮���ж��ٸ�1������һ��1���ͽ���count++           
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m, n;
//	printf("Please enter two integers: ");
//	while (scanf("%d %d", &m, &n) == 2) //�ɹ���ȡ������Ч���ֲſ��Խ�����һ��   
//	{
//		printf("%d\n", diff_bit(m, n));//���ú���  
//	}
//	system("pause");
//	return 0;
//}