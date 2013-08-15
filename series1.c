#include<stdio.h>
void main()
{
    int i,j,k=1,n,l;
    printf("\n enter number of rows");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       for(l=i;l<n;l++)
	printf(" ");
       for(j=0;j<=i;j++)
       {
 	 printf("%d ",k);
	 k++;
       }
      printf("\n");
     }
 
}
