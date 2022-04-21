#include<stdio.h>
int next=0;
int dummy=0;

int main()
{
	int i,j,k,n;
	//printf("Enter the number of rounds\n"); //Number of Rounds
	scanf("%d",&n);
	printf("Minimize\n");
	for(i=0;i<4*n+3;i++)
	{
		printf("x%d + ",i);
	}
	printf("x%d",4*n+3);
	printf("\n");
	printf("\nSubject To\n\n");
	for(i=0;i<n;i++)
	{
		for(k=4*i;k<4*i+7;k++)
		printf("x%d + ",k);
		printf("x%d - 5 d%d >= 0\n",4*i+7,dummy);
		for(j=4*i;j<4*i+7;j++)
			printf("d%d - x%d >= 0\n",dummy,j);
			printf("d%d - x%d >= 0\n",dummy,4*i+7);
		dummy=dummy+1;
	}	
	//At least one S box must be active
	for(i=0;i<4*n+3;i++)
	{
		printf("x%d + ",i);
	}
	printf("x%d >= 1",4*n+3);
	
	printf("\n");
	
	printf("\nBinary\n");
	for(i=0;i<4;i++)
	printf("x%d\n",i);
	for(i=0;i<n;i++)
	{
		printf("d%d\n",i);
	}	
	return 0;	
}
