#include<stdio.h>
#include <bits/stdc++.h>

int array[5];
using namespace std;
int p = 0;
int r = 4;

int partition(int* A,int p,int r)
{
    int x = A[r];
    int i = p-1;

    for(int j = p;j<r;j++)
    {
        if(A[j]<=x)
        {
            i++;
            swap(A[j],A[i]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

void quicksort(int *A,int p, int r)
{
    int q;
    if(p<r)
    {
        q = partition(A,p,r);
        quicksort(A,p,q-1);
        quicksort(A,q+1,r);
    }
}


int main()
{

    printf("Enter the elements of array\n");
    for(int i = 0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }

    quicksort(arr,p,r);

    for(int i = 0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
return 0;

}
