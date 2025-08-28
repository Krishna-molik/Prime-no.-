#include<stdio.h>
void prime(int n)
{
  int i;
  if(n==2){
  printf("it is a prime no.");
  }
  else{
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    break;
    if(i==n-1)
    break;
  }
  if(n%i==0)
  printf("it is not a prime no.");
  else
  printf("it is a prime no. ");
  }
}

void main()
{
   int x;
    printf("enter the no.=");
    scanf("%d",&x);
    prime(x);
}