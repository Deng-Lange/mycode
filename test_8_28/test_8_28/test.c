#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void swap(int n)
//{
//	int a[50], b[50];
//	int i;
//	printf("�������һ�������Ԫ�أ���%d������", n);
//	for (i = 0; i < n; i++){
//		scanf("%d", &a[i]);
//	}
//	printf("������ڶ��������Ԫ�أ���%d������", n);
//	for (i = 0; i < n; i++){
//		scanf("%d", &b[i]);
//	}
//	for (i = 0; i < n; i++){
//		int t = a[i];
//		a[i] = b[i];
//		b[i] = t;
//	}
//	printf("���������ĵ�һ�������Ԫ�أ���%d������", n);
//	for (i = 0; i < n; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n���������ĵڶ��������Ԫ�أ���%d������", n);
//	for (i = 0; i < n; i++){
//		printf("%d ", b[i]);
//	}
//}
//void main()
//{
//	int n;
//	printf("��������Ҫ�����������Ԫ�صĸ���(0<n<50)��");
//	scanf("%d", &n);
//	swap(n);
//	printf("\n");
//}

//ʵ�ֺ���init()��ʼ������Ϊȫ0
//ʵ��print()��ӡ�����ÿ��Ԫ��
//ʵ��reverse()�����������Ԫ�ص����á�
//void Init(int arr[], int sz, int set)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//void Print(int array[], int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int array[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = array[left];
//		array[left] = array[right];
//		array[right] = tmp;
//		left++;
//		right--;
//	}
//}

//�����������ð������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//ð�����������
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//����-�ų�����
//	//arr������
//	//���ִ��ε�ʱ���������ᷢ������
//	//���������������������Ԫ�صĵ�ַ
//	//���鴫��ʵ���ϴ�����������Ԫ�صĵ�ַ
//	print_arr(arr, sz);
//
//	bubble_sort(arr, sz);//ð������ķ�ʽ
//
//	print_arr(arr, sz);
//	return 0;
//}