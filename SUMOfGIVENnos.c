#include<stdio.h>
int main()
{ 
  int n,x,sum=0;

  printf("enter the value of n\t");
  scanf("%d",&n);
  while(n>0)
   { 
     x=n%10;
     sum=sum+x;
     n=n/10;
   }
   printf("%d",sum);    
  }
