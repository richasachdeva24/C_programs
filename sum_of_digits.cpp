#include<stdio.h>
int sum(int*);
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",sum(&n));
	}
	return 0;	
}

int sum(int *n)
{
	int r,s=0;
	
	while(*n>0)
	{
		r=*n%10;
		s=s+r;
		*n=*n/10;
	}
	return s;
}
