#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("*********  1.play  *********\n");
	printf("*********  0.exit  *********\n");
	printf("****************************\n");

}
void game()
{
	int x = 0;
	int y = 0;
	char ret = 0;
	//�����������Ϸ
	//����Ӧ�ó�ʼ��Ϊ�ո�
	char board[ROW][COL] = { 0 };//�洢����
	InitBoard(board , ROW , COL);//��ʼ������--�ո�
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		if ((ret = check_win(board, ROW, COL)) != ' ')
			break;
		DisplayBoard(board, ROW, COL);

		ComputerMove(board,ROW,COL);
		if ((ret = check_win(board, ROW, COL)) != ' ')
			break;
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
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