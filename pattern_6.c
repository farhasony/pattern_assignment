/* 
          
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/
#include<stdio.h>
int main()
{
	int i,rows,j;
	printf("enter number of rows:\n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++,printf("\n"))
	{    
	    for(j=1;j<=i;j++)
			printf("* ");
	}
	for(i=1;i<=(rows-1);i++,printf("\n"))
		{
		    for(j=rows;j>i;j--)
				printf("* ");
		}
				
}
