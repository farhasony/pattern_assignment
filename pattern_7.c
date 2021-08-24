/*            
* * * * *
 * * * *
  * * *
   * *
    *
*/



#include<stdio.h>
int main()
{
	int i,rows,space,j;
	printf("enter number of rows:\n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++,printf("\n"))
	{   
		for(j=1;j<=rows;j++)
		{
		if(j<i)
		printf(" ");
        else
		printf("* ");
		}
	}
}
