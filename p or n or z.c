//Cheking the num is pstive or negative or Zero
#include<stdio.h>
main()
{
	int a;
	printf("a:");
	scanf("%d",&a);
	if(a==0)
	printf("Num is Zero");
	if(a>0)
	printf("Num is positive");
	else if(a<0)
	printf("Num is Negative");
}
