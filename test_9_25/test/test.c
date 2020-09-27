#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//猜名次
/*
5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
A选手说：B第二，我第三；
B选手说：我第二，E第四；
C选手说：我第一，D第二；
D选手说：C最后，我第三；
E选手说：我第四，A第一；
比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
*/
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++)
//	for (B = 1; B <= 5; B++)
//	for (C = 1; C <= 5; C++)
//	for (D = 1; D <= 5; D++)
//	for (E = 1; E <= 5; E++)
//	if (((B == 2) + (A == 3) == 1 && (B == 2) + (E == 4) == 1 && (C == 1) + (D == 2) == 1 && 
//		(C == 5) + (D == 3) == 1 && (E == 4) + (A == 1) == 1) == 1)
//	if (120 == A * B * C * D * E)//五人名次不同，即相乘为定值120来筛选重复名次
//		printf("A=%d  B=%d  C=%d  D=%d  E=%d\n", A, B, C, D, E);
//	return 0;
//}

int checkData(int *p)
{
	int tmp[7] = { 0 }; //标记表，实际是哈希表的思路。一开始每个元素都是0。
	int i;
	for (i = 0; i < 5; i++)
	{
		if (tmp[p[i]]) //如果这个位置的标记已经是1，则代表重复，直接返回0。
		{
			return 0;
		}
		tmp[p[i]] = 1; //如果不是，则给这个位置标记为1。
	}
	return 1; //全部标记完毕也没有出现重复的情况，代表OK。
}
int main()
{
	int p[5]; //0 1 2 3 4分别代表a b c d e
	for (p[0] = 1; p[0] <= 5; p[0]++)
	{
		for (p[1] = 1; p[1] <= 5; p[1]++)
		{
			for (p[2] = 1; p[2] <= 5; p[2]++)
			{
				for (p[3] = 1; p[3] <= 5; p[3]++)
				{
					for (p[4] = 1; p[4] <= 5; p[4]++) //五层循环遍历
					{
						//这里是五个人的描述，由于比较表达式只有0和1两个结果，如果要两个条件有且只有一个为真，则可以用比较表达式的值总和为1的方式直接判定。别忘了还要判定不能并列。
						if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
							(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
							(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
							(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
							(p[4] == 4) + (p[0] == 1) == 1 && //我第四，A第一
							checkData(p) //不能并列
							)
						{
							for (int i = 0; i < 5; i++)
							{
								printf("%d ", p[i]);
							}
							putchar('\n');
						}
					}
				}
			}
		}
	}
	return 0;
}

//猜凶手
/*
A说：不是我;
B说：是C;
C说：是D;
D说：C在胡说;
已知3个人说了真话，1个人说的是假话。写一个程序来确定到底谁是凶手。
*/
//int main()
//{
//	//凶手初始化为字符A；
//	for (char killer = 'A'; killer <= 'D'; killer++)//利用for循环来遍历凶手
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//		{
//			printf("%c是凶手\n", killer);
//		}
//	}
//	return 0;
//}

//打印杨辉三角
//#define N 34
//int main()
//{
//	int n;
//	int y[N][N];
//	printf("请输入要打印的行数：");
//	scanf("%d", &n);
//	printf("%d行杨辉三角如下：\n", n);
//	for (int i = 0; i<n; i++)
//	{
//		y[i][0] = y[i][i] = 1;//杨辉三角形每行第一列和最后一列数据都为1 
//		for (int j = 1; j<i; j++)
//		{
//			y[i][j] = y[i - 1][j - 1] + y[i - 1][j];//每个数字等于肩上两数字之和 
//		}
//	}
//	for (int i = 0; i<n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			printf("%d ", y[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}