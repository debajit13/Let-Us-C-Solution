//Generate all possible combination of 1, 2 and 3

#include<stdio.h>
int main()
{
	int i,j,k;
	printf("The possible combination of 1, 2 and 3 are:\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				if(i!=j && j!=k && k!=i)
			    {
					printf("%d%d%d\n",i,j,k);
			    }
			}
		}  
	}
	return 0;
}
