#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = ~a;//���������ƣ���λȡ��
//	//000000000000
//	//111111111111ȫ��ȡ����Ϊ1
//	printf("%d\n", b);//��ӡ����ԭ��
//}


//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���ֵ��b����++
//	//int b = ++a;//ǰ��++����++����ʹ��a=11,b=11
//	//int b = a--;//��ʹ�ã��ټ�һ
//	//int b =--a;//�ȼ�һ����ʹ��
//	printf("a=%d\n b=%d\n", a, b);
//	return 0;
//}


//int main()
//{
//	//int a = (int)3.14;//ǿ������ת����int��
//	//	return 0;
//
//	//��--��0
//	//��--0
//	//&&--�߼���
//	//||--�߼���
//	int a = 0;
//	int b = 4;
//
//	int c=a || b;
//	printf("c=%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 100;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("%d\n", max);
//
//	return 0;
//}
//
//
//int main()
//{
//	typedef unsigned int u_int;//typedef��unsigned��������
//
//	unsigned int sum = 20;
//	u_int num2 = 20;//��������һ�����ͣ�ֻ�������ֲ�һ��
//	return 0;
//}

//void test()
//{
//	static int a = 1;//static���ξֲ�����
//	//static����ȫ�ֱ���ʱ����̬����ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û����ʹ���ˡ�
//	a++  ;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();//����ת�������test����
//		i++;
//	}
//	return 0;
//
//}

//extern int Add(int x, int y);//����static���޷�������
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//}