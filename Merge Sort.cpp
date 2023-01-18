#include<stdio.h>
#include<stdlib.h>
void mergesort(int*,int,int);
void merge(int*,int,int,int);
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
	
	mergesort(A,0,n-1);
	
	printf("\nThe Array Elements After Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
void mergesort(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=(p+r)/2;
		mergesort(A,p,q);
		mergesort(A,q+1,r);
		merge(A,p,q,r);
	}
}
void merge(int A[],int p,int q,int r)
{
	int n1,n2,L[20],R[20],i,j,k;
	n1=q-p; n2=r-q;
	
	for(i=p;i<q;i++)
	L[i]=A[i];
	
	for(j=q+1;j<r;j++)
	R[j]=A[j];
	
	i=j=0;
	for(k=p;k<=r;k++)
	{
		if(L[i]<=R[j])
		A[k]=L[i++];
		else
		A[k]=R[j++];
	}
}
	
