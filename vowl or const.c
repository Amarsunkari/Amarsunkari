#include<stdio.h>
main()
{
  char x;
  scanf("%C",&x);
  if(x=='a'|| x=='e'|| x=='i'|| x=='0'|| x=='u')
  {
    printf("it's a vowel");	
  }
  
  else
  { 
    printf("it's a consonant");
  }
}
