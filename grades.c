#include<stdio.h>
int main()
{
	int phy,mat,vd,bio,comp;
	float per;
	printf("enter five subject marks");
	scanf("%d%d%d%d%d",&phy,&mat,&vd,&bio,&comp);
	per=(phy+mat+vd+bio+comp)/5;
	printf("percentage=%.2f\n",per);
	if(per>=90)
	{
		printf("grade A");
	}
	else if(per>=80)
	{
		printf("\ngrade B");
	}
	else if(per>=70)
	{
		printf("\ngrade C");
	}
	 else if(per>=40)
	{
		printf("\ngrade D");
	}
	else if (per<=40)
	{
		printf("\ngrade E");
	}
}
