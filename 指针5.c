#include <stdio.h>
//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));//&a�������ַ
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
//����p��ֵΪ0x10000
//test�����͵ı�����С��20���ֽ�
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);//p��һ��test����20���ֽھͱ�Ϊ0x100014��1��16���ֽ� 4���ĸ��ֽ�
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001  long��1���ֽ�
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004  int��4���ֽ�
//	return 0;
//
//}

//40
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int *ptr1 = (int *)(&a + 1);
//	int *ptr2 = (int *)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//%x�����ʽ ����
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű��ʽֻ�洢1��3��5
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
//	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//p[4][2]=*(*(P+4)+2) ����
//	return 0;
//}

//41
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;//12345 678910 &aa+1�������������鵽10�ĺ��棬aa+1��������һ�е��ڶ���6�����Ϊ10��5
//}

//int main()
//{
//	char *a[] = { "work","at","alibaba" };
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;//at  char**ָ�����char*��char*����Ӧ�����ַ�����pa++��ָ����һ��char*����at
//}

//int main()//�ѽ�ͼ  �洢ʱһ����ǰ��ߵ���Ӧ  ����
//{
//	char *c[] = { "ENTER","NEW","POINT","FIRST" };
//	char**cp[] = { c + 3,c + 2,c + 1,c };
//	char***cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);//++ --���Զ��仯ָ��λ�ã�����һ�������ϼӼ�
//	printf("%s\n", *cpp[-2] + 3);//**(cpp+(-2))+3
//	printf("%s\n", cpp[-1][-1] + 1);//*(*(cpp-1)-1)+1
//	return 0;
//}