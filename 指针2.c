#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void test(int arr[3][5])
//{
//}
//void test(int arr[][5])
//{}
//void test1(int arr[3][])//列不能省略，行可以省略
//{}
//void test2(int arr[][])
//{}
//void test3(int* arr)//二维数组的指针是第一行元素，传参的类型设为整型int是错的
//{}

//int main()
//{
//	int arr[3][5] = { 0 };
//	/*test(arr);
//	test1(arr);
//	test2(arr);
//	test3(arr);*/
//
//	return 0;
//}


//void test(char **p)//二级指针用来存放一级指针，
//{}
//int main()
//{
//	char c = 'b';
//	char*pc = &c;
//	char**ppc = &pc;//一级指针*ppc的类型为char*
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//ok? 传的是一个数组并不是指针，不能用二级指针
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;//*pa是函数add的指针
//	printf("%d\n", (*pa)(2, 3));//*pa调用add函数，传参2，3
//	return 0;
//}

//void print(char*str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;//*p代表函数，char*是要传参函数的类型
//	(*p)("hello,bit");
//	return 0;
//}


//(*(void(*)())0)()  把0强制转化成void（*）()函数指针类型，0就是函数中地址。 调用0地址处的该函数

//void(* signal(int,void(*)(int)))(int);
//signal是一个函数声明
//signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数参数是int，返回类型void
//signal函数的返回类型也是一个函数指针；该函数指针指向的函数参数是int，返回类型是void

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int Sub(int x, int y)
//{
//	int z = 0;
//	z = x - y;
//	return z;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int(*parr[4])(int, int)= { Add,Sub,Mul,Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2,3));
//	}
//	return 0;
//}//33讲


//void menu()
//{
//	printf("*****************\n");
//	printf("** 1.add  2.sub**\n");
//	printf("** 3.mul  4.div**\n");
//	printf("*****************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void Calc(int(*pf)(int, int))//回调函数  解决冗余问题
//{
//	int x = 0;
//	int y = 0;
//    printf("请输入两个操作数：");
//    scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	 int input = 0;
//	//int(* pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		/*if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}*/
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			//printf("%d\n",Add(x,y));
//			break;
//		case 2:
//			Calc(Sub);
//			//printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			Calc(Mul);
//			//printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			Calc(Div);//自定义函数
//			//printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//	    }
//	}while (input);
//}

//回调函数
//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))//指针的类型就是void char*
//{
//	printf("test\n");
//	p("bit");//通过指针调用print
//}
//int main()
//{
//	test(print);
//	return 0;
//}

