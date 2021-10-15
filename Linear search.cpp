#include<iostream>
using namespace std;

int main()
{
    int arr[10],i,n, ele, flag=1;
    cout<<"Enter the size of array = ";
    cin>>n;
    for(i=0;i<n;i++)
    {
       cout<<"Enter "<<i<<" element = ";
       cin>>arr[i];
    }
    cout<<"Enter the element to search = ";
    cin>>ele;
    for(i=0;i<n;i++)
    {
       if(arr[i]==ele)
       {
         cout<<"Position of "<<ele<<" in array is "<<i;
         flag=0;
         break;
       }
    }
    if(flag)
    {
       cout<<"Element not found";
    }
    return 0;
}
