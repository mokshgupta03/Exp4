#include<iostream>
using namespace std;
void main()
{
    int i,array[10],n,element,lower_b=0,ub,mid;
cout<<"Enter the no of elements you want in array"<<endl;
cin>>n;
cout<<"Enter elements in the array "<<endl;
for(i=0;i<n;i++)
{
    cin>>array[i];
}
cout<<"The array is "<<endl;
for(i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}
cout<<"Enter the element you want to search in array "<<endl;
cin>>element;
ub=n-1;
while(lower_b<=ub)
{
    mid=(lower_b+ub)/2;
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
        lower_b=mid+1;
    }
    
}
}
