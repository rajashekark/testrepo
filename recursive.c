#include<stdio.h>
int rec(int x)
{
    int f;
    if(x==1)
      return 1;
    else
      f=x*rec(x-1);
}
void main()
{
    int a,fact;
    printf("\n enter a number to find factorial");
    scanf("%d",&a);
    fact=rec(a);
    printf("\n the factorial of the given number is %d",fact);
}
 
