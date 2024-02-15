#include<iostream>
using namespace std;
void main()
{
    int i,array[10],n,element,lb=0,ub,mid;
cout<<"Enter the no of elements you want in 1D martix"<<endl;
cin>>n;
cout<<"Enter elements in the 1D matrix "<<endl;
for(i=0;i<n;i++)
{
    cin>>array[i];
}
cout<<"The 1D matrix is "<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<"Enter the element you want to search in 1D matrix "<<endl;
cin>>element;
ub=n-1;
while(lb<=ub)
{
    mid=(lb+ub)/2;
    if(element==array[mid])
    {
        cout<<"Term Found"<<endl;
    }
    else if(element<array[mid])
    {
        ub=mid-1;
    }
    else
    {
        lb=mid+1;
    }
    
}
}
