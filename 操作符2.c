#include<stdio.h>

//int main()
//{
//
//	int a = 0;
//	//  ~��λȡ��
//	//000000000000000
//	//111111111111111-����
//	//111111111111110-���루�����һ��
//	//100000000000001-ԭ��
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

//int main()//360��������
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//a����ʹ�ú�++��a=0Ϊ�ٺ���Ĳ��ټ��㣬ԭֵ���
//	i = a++ || ++b || d++;//a=1Ϊ�����ڼ������ģ�b c dԭַ���
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
//	//�������������˼һ��
//	max = (a > b ? a : b);//��Ŀ������
//	
//
//	return 0;
//}

//���ű��ʽ�����������μ��㣬���Ϊ���һ�����ʽ
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
//	struct Stu s1 = { "����",20,"20210019" };//structҪСд

//	struct Stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n",s1.age);*/
//
//	return 0;
//}