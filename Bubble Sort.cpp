#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j,*A,n,t;
	printf("Enter Size Of The Array : ");
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	
	printf("The Array Elements Before Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
	
	//Bubble Sorting Logic
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(A[j]<A[j-1])
			{
				t=A[j];
				A[j]=A[j-1];
				A[j-1]=t;
			}
		}
		printf("\nPass %d : ",i+1);
		for(j=0;j<n;j++)
		printf("%d ",A[j]);
	}
	printf("\nThe Array Elements After Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
