#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void test(int arr[3][5])
//{
//}
//void test(int arr[][5])
//{}
//void test1(int arr[3][])//�в���ʡ�ԣ��п���ʡ��
//{}
//void test2(int arr[][])
//{}
//void test3(int* arr)//��ά�����ָ���ǵ�һ��Ԫ�أ����ε�������Ϊ����int�Ǵ��
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


//void test(char **p)//����ָ���������һ��ָ�룬
//{}
//int main()
//{
//	char c = 'b';
//	char*pc = &c;
//	char**ppc = &pc;//һ��ָ��*ppc������Ϊchar*
//	char* arr[10];
//	test(&pc);
//	test(ppc);
//	test(arr);//ok? ������һ�����鲢����ָ�룬�����ö���ָ��
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
//	int(*pa)(int, int) = Add;//*pa�Ǻ���add��ָ��
//	printf("%d\n", (*pa)(2, 3));//*pa����add����������2��3
//	return 0;
//}

//void print(char*str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;//*p��������char*��Ҫ���κ���������
//	(*p)("hello,bit");
//	return 0;
//}


//(*(void(*)())0)()  ��0ǿ��ת����void��*��()����ָ�����ͣ�0���Ǻ����е�ַ�� ����0��ַ���ĸú���

//void(* signal(int,void(*)(int)))(int);
//signal��һ����������
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int����������void
//signal�����ķ�������Ҳ��һ������ָ�룻�ú���ָ��ָ��ĺ���������int������������void

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
//}//33��


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
//void Calc(int(*pf)(int, int))//�ص�����  �����������
//{
//	int x = 0;
//	int y = 0;
//    printf("������������������");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		/*if (input >= 1 && input <= 4)
//		{
//			printf("����������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//			Calc(Div);//�Զ��庯��
//			//printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//	    }
//	}while (input);
//}

//�ص�����
//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))//ָ������;���void char*
//{
//	printf("test\n");
//	p("bit");//ͨ��ָ�����print
//}
//int main()
//{
//	test(print);
//	return 0;
//}

