#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>

//��������Ϸ
/*
void menu()
{
printf("********************************\n");
printf("*******     1. play      *******\n");
printf("*******     0. exit      *******\n");
printf("********************************\n");
}
void game()
{
int ret = rand() % 100 + 1;
int num = 0;
while (1)
{
printf("�������:>");
scanf("%d", &num);
if (num == ret)
{
printf("��ϲ�㣬�¶���\n");
break;
}
else if (num > ret)
{
printf("�´���\n");
}
else
{
printf("��С��\n");
}
}
}
int main()
{
int input = 0;
srand((unsigned int)time(NULL));
do
{
menu();
printf("��ѡ��:>");
scanf("%d", &input);
switch (input)
{
case 1:
game();
break;
case 0:
printf("�˳���Ϸ\n");
break;
default:
printf("ѡ�����\n");
break;
}
} while (input);
return 0;
}
*/

//����Ļ�����9*9�˷��ھ���
/*
int main()
{
int i = 0;
int j = 0;
for (i = 1; i <= 9; i++)
{
for (j = 1; j <= i; j++)
{
printf("%d*%d=%d ", i, j, i*j);
}
printf("\n");
}
system("pause");
return 0;
}
*/

//��10 �����������ֵ
/*
int main() {
int a[10], max;
printf("������10��������");
for (int i = 0; i < 10; i++)
{
scanf("%d", &a[i]);
}
max = a[0];
for (int i = 0; i < 10; i++)
{
if (a[i]>max)
{
max = a[i];
i++;
}
}
printf("max=%d", max);
system("pause");
return 0;
}
*/

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
/*int main()
{
	int i;
	double sum = 0, tem;
	for (i = 1; i <= 100; i++)
	{
		tem = 1.0 / i * (i % 2 ? 1 : -1);
		sum += tem;
	}
	printf("��������Ϊ%lf\n", sum);
	system("pause");
	return 0;
}*/