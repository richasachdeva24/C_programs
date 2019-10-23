#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int *);
main()
{
	int n,r,ans,s;
	float a;
	
	printf("Enter value of n  ");
	scanf("%d",&n);
	printf("Enter value of r  ");
	scanf("%d",&r);
	s=n-r;
	ans=fact(&n)/((fact(&r))*fact(&s));
	a=(float)ans;
	printf("NCR is %.3f",a);
}

int fact(int *n)
{
	int i,fact=1;
	
	for(i=1;i<=*n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
