#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//猜数字游戏
//void menu()
//{
//	printf("******************\n");
//	printf("***1.play 0.exit**\n");
//	printf("******************\n");
//
//}
//
//void game()
//{
//	int guess = 0;
//
//	int ret = rand() % 100 + 1;//生成随机数,%100后取值范围为1-100
//	
//
//
//	while (1)
//	{
//		printf("请猜数字");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		
//	}
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//随机数生成器
//									//拿时间戳来设置随机数的生成起始点
//	do
//	{
//		menu();
//		printf("请选择>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1: 
//			game();
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
