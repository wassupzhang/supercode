#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));//&a是数组地址
//	return 0;//2  5  
//}

//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;
//假设p的值为0x10000
//test的类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//p加一个test类型20个字节就变为0x100014，1是16个字节 4是四个字节
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001  long是1个字节
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004  int是4个字节
//	return 0;
//
//}

//40
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//%x输出形式 不会
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式只存储1，3，5
//	int *p;
//	p = a[0];
//	printf("%d\n", p[0]);//1
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p[4][2]=*(*(P+4)+2) 不会
//	return 0;
//}

//41
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;//12345 678910 &aa+1是跳过整个数组到10的后面，aa+1是跳过第一行到第二行6。结果为10，5
//}

//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;//at  char**指向的是char*而char*所对应的是字符串，pa++就指向下一个char*就是at
//}

//int main()//已截图  存储时一二行前后颠倒对应  不会
//{
//	char *c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);//++ --会自动变化指针位置，再上一个基础上加减
//	printf("%s\n", *cpp[-2] + 3);//**(cpp+(-2))+3
//	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1
//	return 0;
//}