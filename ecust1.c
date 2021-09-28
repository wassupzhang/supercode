#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>

//int main()
//{
//	double d=3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);//double用%lf占位
//
//}


//#include <string.h>  //用到strcpy时要加的头文件
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序语言",55 };
//	strcpy(b1.name, "C++");//拷贝c++到name里
//	printf("%s\n", b1.name);



	//struct Book* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);//->另外一种操作符


	/*printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 100;
	printf("修改后的价格：%d\n", b1.price);*/
//	return 0;
//
//}



//int main()
//{
//	int day = 0;//必须是整形
//	scanf("%d", &day);
//	switch(day)
//	{
//	case 1://必须为整形常量
//	case 2:
//		printf("工作日\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	default:
//		printf("输入错误");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		//ctrl+z可以停止
//	{
//		putchar(ch);
//	}
//

	//int ch = getchar();
	//putchar(ch);//与printf()是一个功能
 //   printf("%c\n", ch);
	//return 0;
//}