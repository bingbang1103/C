#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include "game.h"
#include "game.c"
void meun()
{
	printf("*****************************\n");
	printf("**** 1.play **** 0.exit *****\n");
	printf("*****************************\n");
}
void game()//游戏算法实现
{
	char ret = 0;
	//数组存放棋盘位子信息
	char board[ROW][COL] = {0};//全部空格
	InitBoard(board,ROW,COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		system("cls");
		printf("三子棋game\n");
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret=IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑下棋
		system("cls");
		printf("三子棋game\n");
		DisplayBoard(board, ROW, COL);//打印棋盘
		ret=IsWin(board, ROW, COL);//判断输赢
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢！\n");
	}
	else
	{
		printf("平局!\n");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请选择：>");
		scanf("%d",&input );
		switch (input)
		{
		    case 1:
				printf("三子棋game\n");
				game();
				break;
			case 0:
			printf("退出游戏\n");
				break;
			default:
				printf("选择错误,请重新选择!\n");
				break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}