#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	//ʹ��free�ͷŶ�̬�����ڴ��һ����,�����޷�����
//	//����Ҫ�ͷ����е��ڴ�ſ���
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//��ͬһ�鶯̬�ڴ�Ķ���ͷ�(������)
//int main()
//{
//	int *p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	free(p);
//	//p = NULL;�ͷź�Ҫ��һ����ָ��
//
//	free(p);
//	return 0;
//}


//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//p���β�ֻ��getmemory�ڲ���Ч�������޷�����ֵ��str�Ǵ�ֵ��p�ģ�Ҫ�Ǵ���ַ��ȥ�Ϳ��Է�����
//	//��̬�����ڴ���δ�ͷŲ����޷��ҵ���������ڴ�й¶
//	strcpy(str, "hello world");//
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;//���г�����
//}

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();//p���г���֮��������ˣ�str�ٷ��ʵ�ַʱ���Ҳ����ˣ�������һ��ֵ
//	printf(str);
//}
//int main()
//{
//	Test();//���ֵ
//	return 0;
//}

//��������c-c++���
//void GetMemory(char **p, int num)
//{
//	*p = (char*)malloc(num);
//
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//
//}
//int main()
//{
//	Test();//�ܴ�ӡhello��û���ͷſռ�
//	return 0;
//}

//void Test(void)
//{
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);//��ǰ�ͷ����ڴ棬���º���Ƿ�������
//	//str = NULL;//����֮��
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//
//}
//int main()
//{
//	Test();
//	return 0;
//}//65

//char *get_memory()
//{
//	char p = (int*)malloc(40);
//}
//void Test(void)
//{
//	char *str = NULL;
//	str = get_memory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//66
//struct S
//{
//	int n;
//	int arr[0];//δ֪��С��-���������Ա-����Ĵ�С�ǿ��Ե�����
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//һ�ο��������ڴ�ռ�
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i]=i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}

