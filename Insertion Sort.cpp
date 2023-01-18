#include<stdio.h>
#include<stdlib.h>
main()
{
	int i,j,*A,n,key;
	printf("Enter Size Of The Array : ");
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	
	printf("The Array Elements Before Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
	
	//Insertion Sorting Logic
	for(i=1;i<n;i++)
	{
		key=A[i];
		j=i-1;
		
		while(j>-1 && A[j]>key)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
		
		printf("\nPass %d : ",i);
		for(j=0;j<n;j++)
		printf("%d ",A[j]);
	}
	
	printf("\nThe Array Elements After Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
