#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,p,a,c=0;
	
	scanf("%d",&n);
	
	while(n>0)
	{
		scanf("%d %d",&m,&p);
		a=m^p;
		
		while(a>0)
		{
			if((a&1)==1)
			
				c++;
				a=a>>1;
		
		}
		
		printf("%d",c);
		n--;
		c=0;
	
	}
	
	
	
}
