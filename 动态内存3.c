#include<stdio.h>

struct S
{
	int n;
	int*arr;
};
int main()
{
	struct S*p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*)malloc(10 * sizeof(int));//�����ο����ڴ�ռ�
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}

