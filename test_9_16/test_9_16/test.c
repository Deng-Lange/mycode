#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
#include <windows.h>
#include <math.h>

//��ӡ����
int main()
{
	int x = 9;//����ʹ��ʹ��ӡ�ո񷽱�
	for (int i = 0; i < 9; i++)//����9�У�ѭ��9��
	{

		for (int j = x; j>0; j--)//��ӡ�ո�ÿ�οո����һ��
		{
			printf(" ");
		}
		x--;//ʹ��ӡ�Ŀո�ÿ�μ���һ��
		for (int m = 0; m <= i * 2; m++)//��ӡ * ÿ����������
		{
			printf("*");
		}

		printf("\n");//����

	}
	//��ʼ��ӡ������   ��������ӡ9�У�����Ҫô�������һ�У�Ҫô��һ�� ����������һ�У�����8��
	int l = 2;
	for (int i = 8; i >0; i--)//��ӡ8��
	{
		for (int j = 0; j<l; j++)//��ӡ�ո�
		{
			printf(" ");
		}
		l++;
		for (int m = 0; m<i * 2 - 1; m++)//��ӡ*
		{
			printf("*");
		}
		printf("\n");
	}
	getchar();
	return 0;
}

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮�͸պõ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#define M 100000//����궨����Խ����޸ĳ�������
//int main()
//{
//	int i = 1;
//	printf("0��%d��ˮ�ɻ���Ϊ:\n", M);
//	for (; i <= M; i++)
//	{
//		int count = 1;//ˮ�ɻ���������һλ
//		int temp = i;
//		int sum = 0;
//		while (temp / 10)//����whileѭ���жϸ�����λ��
//		{
//			count++;
//			temp /= 10;
//		}
//		temp = i;//���¸�temp��ֵ����Ϊtemp��whileѭ�����Ѿ����޸���
//		while (temp)//�жϸ����Ƿ���ˮ�ɻ���
//		{
//			sum += pow(temp % 10, count);//��temp������������ÿһλ����������pow��������ÿһλ��n�η���nΪ����λ��
//			temp /= 10;//��temp��10��ÿ�ν��������λ��ȥ
//		}
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	system("pause");
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
//���磺2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int count = 0;
//	int Sn = 0;
//	int tmp = 0;
//	printf("��������Ҫǰ����ĺͣ�\n");
//	scanf("%d", &count);
//	printf("������a��\n");
//	scanf("%d", &a);
//	for (int i = 0; i < count; i++)
//	{
//		tmp = tmp * 10 + a;
//		Sn += tmp;
//	}
//	printf("Sn=%d\n", Sn);
//	return 0;
//}

//дһ����������������һ���ַ��������ݡ�
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

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
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