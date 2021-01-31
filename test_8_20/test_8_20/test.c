#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>

//猜数字游戏
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
printf("请猜数字:>");
scanf("%d", &num);
if (num == ret)
{
printf("恭喜你，猜对了\n");
break;
}
else if (num > ret)
{
printf("猜大了\n");
}
else
{
printf("猜小了\n");
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
printf("请选择:>");
scanf("%d", &input);
switch (input)
{
case 1:
game();
break;
case 0:
printf("退出游戏\n");
break;
default:
printf("选择错误\n");
break;
}
} while (input);
return 0;
}
*/

//在屏幕上输出9*9乘法口诀表
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

//求10 个整数中最大值
/*
int main() {
int a[10], max;
printf("请输入10个整数：");
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

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
/*int main()
{
	int i;
	double sum = 0, tem;
	for (i = 1; i <= 100; i++)
	{
		tem = 1.0 / i * (i % 2 ? 1 : -1);
		sum += tem;
	}
	printf("最后计算结果为%lf\n", sum);
	system("pause");
	return 0;
}*/