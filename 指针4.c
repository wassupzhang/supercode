//35
#include <stdio.h>
//int Add(int x, int y)
//{
//	
//	return x+y;
//}
//
//int main()
//{
//	int(*pAdd)(int, int) = Add;
//	int sum = pAdd(1, 2);
//	printf("%d\n", sum);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	
//	int(*p)(int, int) = Add;
//	printf("%d\n",(*p)(2,2));
//	return 0;
//}

//int main()
//{
//	//sizeof(������)-��������ʾ���������С
//	//&������- ��ʾ��������
//	int a[] = { 1,2,3,4 };//4*4=16
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//4 ��ʾ��Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*a));//4 ��ʾ��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a+1));//4 a+1��2��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4 ��2��Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));//4 ȡ����������ĵ�ַ����ַ����4���ֽ�
//	printf("%d\n", sizeof(*&a));//16  &a����ĵ�ַ�������ַ�����÷��ʵ�������
//	printf("%d\n", sizeof(&a+1));//4  ���ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(&a[0]));//4
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6*1=6
//	printf("%d\n", sizeof(arr+0));//4  arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1  ��Ԫ�صĵ�ַ������
//	printf("%d\n", sizeof(arr[1]));//1  
//	printf("%d\n", sizeof(&arr));//4 ����ĵ�ַ
//	printf("%d\n", sizeof(&arr+1));//4  �������������ĵ�ַ
//	printf("%d\n", sizeof(&arr[0]+1));//�ڶ���Ԫ�صĵ�ַ
//
//	//strlen()�������ַ����ĳ��ȵ� '\0'Ϊֹ
//	printf("%d\n", strlen(arr));//���ֵ û��\0 �������ȡֵ
//	printf("%d\n", sizeof(&arr+1));//���ֵ  ����һ��֮�����ȡֵ��������6
//}


//38
//char* p="abcdef"
//printf("%d\n", sizeof(p));//4  ����ĸ��ַ��С
//printf("%d\n", sizeof(p+1));//4  b�ĵ�ַ
//printf("%d\n", sizeof(*p));//1  ��������ĸa
//printf("%d\n", sizeof(p[0]));//1  ����a
//printf("%d\n", sizeof(&p));//4
//printf("%d\n", sizeof(&p+1));//4
//printf("%d\n", sizeof(&p[0]+1));//4

//printf("%d\n", strlen(p));//6
//printf("%d\n", strlen(p+1));//5
//printf("%d\n", strlen(&p));//���ֵ  ��֪��a�ĵ�ַ��ʲô��11 22 33������ֹͣ�������ֵ
//printf("%d\n", strlen(&p+1));//���ֵ
//printf("%d\n", strlen(&p[0]+1));//5  ��b�����

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%p\n", sizeof(a));//48  3��4�� 3*4*4=48
//	printf("%p\n", sizeof(a[0][0]));//4
//	printf("%p\n", sizeof(a[0]));//16  a[0]�ǵ�һ����Ϊ������
//	printf("%p\n", sizeof(a[0]+1));//4 a[0]�ǵ�һ������������������ʱ����Ԫ�صĵ�ַ a[0]+1�ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%p\n", sizeof(*(a[0]+ 1)));//4  ��һ�еڶ���Ԫ��  ��С��4
//	printf("%p\n", sizeof(a+1));//4 ��Ԫ�صĵ�ַ�ǵ�һ�У�a+1���ǵڶ��е�ַ
//	printf("%p\n", sizeof(&a[0]+1));//4 �ڶ��е�ַ
//	printf("%p\n", sizeof(*a));//16 ��һ�еĴ�С
//} 