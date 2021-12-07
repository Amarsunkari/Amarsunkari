#include<stdio.h>
int main()
{
	int t,h,e,m,s,tot=250,stot;
	float p;
	printf("T:");
	scanf("%d",&t);
	printf("\nH:");
	scanf("\n%d",&h);
	printf("\nE:");
	scanf("\n%d",&e);
	printf("\nM:");
	scanf("\n%d",&m);
	printf("\nS:");
	scanf("\n%d",&s);
	stot=t+h+e+m+s;
	p=stot*100/tot;
	printf("\n%.1f",p);
	if(p>90.0)
	printf("\nA Grade");
	else if(p>80.0)
	printf("\nB Grade");
	else if(p>70.0)
	printf("\nC Grade");
	else if(p>=40.0)
	printf("\nD Grade");
	else if(p<40.0)
	printf("\nE Grade");
}
