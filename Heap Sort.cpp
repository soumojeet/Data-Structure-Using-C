#include<stdio.h>
#include<stdlib.h>
void heapsort(int*,int);
void build_max_heap(int*,int);
void max_heapify(int*,int,int);
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
	
	heapsort(A,n);
	
	printf("\nThe Array Elements After Sorting : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}
void heapsort(int A[],int n)
{
	int i,t;
	build_max_heap(A,n);
	for(i=n-1;i>0;i--)
	{
		t=A[0];
		A[0]=A[i];
		A[i]=t;
		max_heapify(A,0,i-1);
	}
}
void build_max_heap(int A[],int n)
{
	int i;
	for(i=n/2;i>=0;i--)
	max_heapify(A,i,n);
}
void max_heapify(int A[],int i,int n)
{
	int l,r,largest,t;
	l=2*i; r=2*i+1;
	
	if(l<=n && A[l]>A[i])
	largest=l;
	else
	largest=i;
	
	if(r<=n && A[r]>A[largest])
	largest=r;
	
	if(largest!=i)
	{
		t=A[i];
		A[i]=A[largest];
		A[largest]=t;
		max_heapify(A,largest,n);
	}
	
	
}
