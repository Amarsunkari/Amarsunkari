#include<stdio.h>
main()
{
	int a,b,c,f;
	printf("enter the value of a:");
	scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
	printf("enter the value of c:");	
	scanf("%d",&c);
	f=a+b+c;
	printf("the sum is %d",f);
	if(f==180)
	{
		printf("\nthe triangle is valid");
	}
	else
	{
		printf("\nthe triangle is invalid");
	}
	
	
	
	
}

