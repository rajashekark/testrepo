/******************************************************/
/*     Author Vijay                                   */
/* menu driven prog using functions, pointers,switches*/
/* 1.factorial  2. prime or not 3.odd or even 4.exit  */
  
void factorial();
void prime();
void odd();
#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i=1;
while(i>0)
 {
printf("\n*************************");
printf("\n           Menu          ");
printf("\n1.Factorial\n2.Prime or not\n3.odd or even\n4.exit");
printf("\n*************************");
printf("\nselect an option from above");
scanf("%d",&n);

   switch(n)
   {
      case 1: factorial();
	      break;
      case 2: prime();
 	      break;
      case 3: odd();
              break;
   }
   if(n==4)
	break;
   i++;
   }
}
void factorial()
{
  int n,*pn,i=1,fact=1;
  printf("enter a number to find the factorial");
  scanf("%d",&n);
  pn=&n;
  while(i<=*pn)
  {
     fact=fact*i;
     i++;
  }
printf("\nthe factorial of the given number is %d",fact);
}

void prime()
{
  int n,*pn;
  int **p,i=2;
  printf("\n enter a number to find prime or not");
  scanf("%d",&n);
  pn=&n;
  p=&pn;
  while(i<(**p))
  {
    if((**p)%i==0)
    {
      printf("\n the number is not a prime");
      break;
     }
   i++;
   }
  if((**p)==i)
    printf("\n the entered number is prime");
}
void odd()
{
 int n;
 printf("enter a number");
 scanf("%d",&n);
 if(n%2==0)
   printf("even");
  else printf("odd");
}
