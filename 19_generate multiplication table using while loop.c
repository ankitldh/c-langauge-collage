#include<stdio.h>
int main()
{
	int a,b=1;
	printf("enter a number to print the table: ");
	scanf("%d",&a);
	while(b<11)
	{
		printf("%d * %d = %d\n",a,b,a*b);
		b++;
	}
}
