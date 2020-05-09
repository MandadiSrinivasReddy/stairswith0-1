#include<stdio.h>
int main()
{
	int i,j,n,k=0;
	printf("enter the no. of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",k);
			printf("%d",k+1);
		}
		
		printf("\n");
	}
	return 0;
}
