#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include<time.h>
void menu()
	{
	printf("******************************\n");
	printf("****	1.play	0.exit	*****\n");
	printf("******************************\n");
	}
// 
void game()
{
	int guess = 0;
	int ret = rand()%100+1;//生成1--100的数
	//1.生成一个随机数 RAND_MAX 32767
	//2.猜数字
	//printf("%d\n", ret);
	while (1)
	{
		printf("请猜数字？：>\n");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了！\n");
		}
		else if(guess < ret)
		{
			printf("猜小了！\n");
		}
		else
		{
		printf("猜对了！\n");
		break;
        }
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//时间戳=当前计算机的时间-计算机的起始时间（1970.1.1.0：0：0）=（XXX）秒

	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch(input)
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