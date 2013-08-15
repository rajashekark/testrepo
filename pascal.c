#include<stdio.h>
int fact(int a);
void main()
{
    int lines,i,j,pas;
    printf("\n enter the number of lines for pascal");
    scanf("%d",&lines);
      for(i=0;i<lines;i++)
      {
        for(j=0;j<=lines-1;j++)
	    printf(" ");
	for(j=0;j<=i;j++)
	{
	    pas=(fact(i)/((fact(i)*fact(i-j))));
	    printf("%d",pas);
	}
        printf("\n");
       }
}
int fact(int a)
{
    int i=1,fact=1;
    while(i<=a)
    {
       fact=fact*i;
       i++;
    }
 return fact;
}	 
