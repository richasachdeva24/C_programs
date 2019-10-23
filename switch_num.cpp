#include<stdio.h>
#include<conio.h>
#include<math.h>
void check(int *n);
int main()
{
	int n;
	
	scanf("%d",&n);
	
	check(&n);
	
}
void check(int *n)
{
	
	switch(*n)
	{
		case 1:
			{
				printf("one\t odd");
			}
			break;
		case 3:
			{
				printf("three\t odd");
			}
			break;
		case 5:
			{
				printf("five\t odd");
			}
			break;
		case 7:
			{
				printf("seven\t odd");
			}
			break;
		case 9:
			{
				printf("nine\t odd");
			}
			break;
		case 0:
			{
				printf("zero\t even");
			}
			break;
		case 2:
			{
				printf("two\t even");
			}
			break;
		case 4:
			{
				printf("four\t even");
			}
			break;
		case 6:
			{
				printf("six\t even");
			}
			break;
		case 8:
			{
				printf("eight\t even");
			}
			break;
		default:
			printf("Enter single digit");
			
			
	}
}
