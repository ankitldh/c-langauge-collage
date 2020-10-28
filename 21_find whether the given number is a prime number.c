#include<stdio.h>
int main()
{
	int a,b,flag=0;
	printf("enter a number to check if prime or not: ");
	scanf("%d",&a);
	for(b=2;b<a/2;b++)
	{
		if(a%b==0)
		{
			flag=1;
			break;
			
		}
	}	
	if(a==1)
	{
		printf("%d is not a prime number",a);
	}
	
	else if(flag==1)
	{
		printf("%d is not a prime number",a);
		
	}
	else
	{
		printf("%d is a prime number",a);
	}
	
}
