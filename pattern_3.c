/*            1
            2   3
          4   5    6
       7   8    9     10
    11  12    13   14     15
*/



#include<stdio.h>
int main()
{
	int i,rows,space,j,a=1;
	printf("enter number of rows:\n");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{   
		for(space=1;space<=(rows-i);space++)
		printf("  ");
		for(j=1;j<=i;j++,a++)
		{
	    if(a<=10)
		printf(" %d ",a);
		if(a>10)
		printf("%d  ",a);
     	}
     	printf("\n");
   }
}
