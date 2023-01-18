#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j,*A,n,smallest,t;
	printf("Enter Size Of The Array : ");
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	
	printf("The Array Elements Before Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
	
	//Selection Sorting Logic
	for(i=0;i<n-1;i++)
	{
		smallest=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[smallest])
			smallest=j;
			
			t=A[i];
			A[i]=A[smallest];
			A[smallest]=t;
		}
		printf("\nPass %d : ",i+1);
		for(j=0;j<n;j++)
		printf("%d ",A[j]);			
	}
	printf("\nThe Array Elements After Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
	
