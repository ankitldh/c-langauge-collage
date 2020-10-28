#include<stdio.h>
int main()
{
	int amount,rate,period,rate_of_interst;
	printf("enter amount: ");
	scanf("%d",&amount);
	printf("enter rate: ");
	scanf("%d",&rate);
	printf("enter period: ");
	scanf("%d",&period);
	rate_of_interst = (amount*rate*period)/100;
	printf("rate of interst is %d",rate_of_interst);
	
}
