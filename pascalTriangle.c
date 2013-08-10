#include<stdio.h>
int fact(int a);
void main()
{
  int rows,i,j,ncr,l;
  printf("\n enter the number of rows in pascal triangle");
  scanf("%d",&rows);
     for(i=0;i<=rows;i++)
     {
       for(l=i;l<rows;l++)
	printf(" ");
	 for(j=0;j<=i;j++)
         {
  
           ncr=fact(i)/((fact(i-j)*fact(j)));
	   printf(" %d ",ncr);
          }
        printf("\n");
      }
}
int  fact(int a)
 {
  int i=1,fact=1;
  while(i<=a)
  {
     fact=fact*i;
     i++;
  }
return fact;
}
