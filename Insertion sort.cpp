#include<iostream>
using namespace std;

int main()
{
    int arr[20],i,n,temp,j;
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
    
    for(i=1;i<n;i++)
    {
       temp=arr[i];
       for(j=i-1;j>=0 && temp<arr[j];j--) 
       {
          arr[j+1]=arr[j];
       }
       arr[j+1]=temp;
    }
    cout<<endl;
    cout<<"array after";
    for(i=0;i<n;i++)
    {
       cout<<"  "<<arr[i];
    }
    return 0;
}
