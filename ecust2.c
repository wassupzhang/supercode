#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//��������Ϸ
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
//	int ret = rand() % 100 + 1;//���������,%100��ȡֵ��ΧΪ1-100
//	
//
//
//	while (1)
//	{
//		printf("�������");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//	srand((unsigned int)time(NULL));//�����������
//									//��ʱ����������������������ʼ��
//	do
//	{
//		menu();
//		printf("��ѡ��>:\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1: 
//			game();
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
