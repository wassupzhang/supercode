#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int count_bit_one(int n)//�ȸ�����⣺���Ҷ���������1�ĸ���
//{
//	int count = 0;
//	while (n!=0)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
////n=n &(n-1)
////1101 n
////1100 n-1
////1100 n ÿ����һ��1
////1011 n-1
////1000 n
//int main()
//{
//	int a = 0;
//	
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}


//int get_diff_bit(int m, int n)//���Ҷ������в�ͬ������λ�����ĸ���
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n", count);void print(int m)//��ӡ��һ����������λ����żλ����
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i -= 2)//��2λ�����ƶ����2�����ƶ�һ��
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}
//
//
//int Fun(int n)//��n=2ʱ���ݹ�ֵΪ16
//{
//	if (n == 5)//n!=2��else
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//	return 0;
//}

//����һ��������ÿһλ�����ĺ��Ƕ���
//1729
//(172)+1729%10
//(17)+172%10+1729%10
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//����n��k�η�
double Pow(int n, int k)
{
	if (k < 0)
		return 1.0 / Pow(n, -k);
	if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}