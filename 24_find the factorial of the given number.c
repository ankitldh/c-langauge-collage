#include<stdio.h>
int main()
{
	int a,b=1,i=1;
	printf("enter a number to find the factorial: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		b*=i;
		
	}
	printf("factorial of %d is %d",a,b);
}
