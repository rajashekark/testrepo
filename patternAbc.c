#include<stdio.h>
void main()
{
    int i,j,k,l;

    for(i=1;i<=6;i++)
    {
        k=65;
	for(j=6;j>=i;j--)
	{
	    printf("%c",k);
	    k++;
	}
        k=k-1;

	for(l=(2*i-1);l>=1;l--)
	   printf(" ");

	for(j=6;j>=i;j--)
	{
	   printf("%c",k);
	   k--;
	}
	printf("\n");
    }
}

