#include<iostream>
using namespace std;

int main()
{
    int arr[20],i,n,temp,j,min;
    cout<<"enter the size = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
       cout<<"enter "<<i<<" element = ";
       cin>>arr[i];
    }
    cout<<"array before";
    for(i=0;i<n;i++)
    {
       cout<<"  "<<arr[i];
    }
   for(i=0;i<n-1;i++)
    {
       max=i;
       for(j=i+1;j<n;j++)
       {
          if(arr[min]>arr[j])
          { 
            min=j;
          }
       }
       temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
    }
    cout<<endl;
    cout<<"array after";
    for(i=0;i<n;i++)
    {
       cout<<"  "<<arr[i];
    }
    return 0;
}
