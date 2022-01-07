#include<stdio.h>

//int main()
//{
//
//	int a = 0;
//	//  ~按位取反
//	//000000000000000
//	//111111111111111-补码
//	//111111111111110-反码（补码减一）
//	//100000000000001-原码
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//
//}

//int main()//360笔试真题
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//a是先使用后++，a=0为假后面的不再计算，原值输出
//	i = a++ || ++b || d++;//a=1为真则不在计算后面的，b c d原址输出
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	//下面与上面的意思一样
//	max = (a > b ? a : b);//三目操作符
//	
//
//	return 0;
//}

//逗号表达式，从左到右依次计算，结果为最后一个表达式
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//    int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "张三",20,"20210019" };//struct要小写

//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n",s1.age);*/
//
//	return 0;
//}