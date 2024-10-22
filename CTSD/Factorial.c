#include<stdio.h>
void main()
{
	int i,j,fact=1;
	printf("Enter a number : ");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		fact=fact*j;
	}
	printf("Factorial is %d",fact);
}