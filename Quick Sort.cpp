#include<stdio.h>
#include<stdlib.h>
void quicksort(int*,int,int);
int partition(int*,int,int);
main()
{
	int i,*A,n;
	printf("Enter Size Of The Array : ");
	scanf("%d",&n);
	A=(int*)malloc(n*sizeof(int));
	
	printf("Enter Array Elements :\n");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	
	printf("The Array Elements Before Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
	
	quicksort(A,0,n-1);
	
	printf("The Array Elements After Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
void quicksort(int A[],int p,int r)
{
	int q;
	if(p<r)
	q=partition(A,p,r);
	quicksort(A,p,q);
	quicksort(A,q+1,r);
}
int partition(int A[],int p,int r)
{
	int x,i,j,t;
	x=A[p];
	i=p-1; j=r+1;
	
	while(1)
	{
		do
		{
			j--;
		}while(A[j]<x);
		do
		{
			i++;
		}while(A[i]>=x);
		
		if(i<j)
		{
			t=A[i];
			A[i]=A[j];
			A[j]=t;
		}
		else
		return(j);
	}
}
