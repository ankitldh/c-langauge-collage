#include<stdio.h>
int main() 
{
	int radius;
	float area_of_circle;
	printf("enter the value of radius in m: ");
	scanf("%d",&radius);
	area_of_circle=22/7*radius*radius;
	printf("area of circle is %0.2f m",area_of_circle);
}
