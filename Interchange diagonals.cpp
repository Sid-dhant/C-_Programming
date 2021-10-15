#include<iostream>
using namespace std;

int main()
{
    int arr[10][10],i,j,n,temp;
    cout<<"Enter the size of array = ";
    cin>>n;
    cout<<"\n";
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++) 
        {
          cout<<"Enter ["<<i<<j<<"] element = ";
          cin>>arr[i][j];
        }
    }
    cout<<"\n";
    cout<<"Matrix before interchanging =\n";
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++) 
        {
          cout<<"  "<<arr[i][j];
        }
       cout<<"\n";
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++) 
        {
          if(i==j)
          {
            temp=arr[i][i];
            arr[i][i]=arr[i][n-(i+1)];
            arr[i][n-(i+1)]=temp;
          }
        }
    }
    cout<<"\n";
    cout<<"Matrix after interchanging =\n";
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++) 
        {
          cout<<"  "<<arr[i][j];
        }
       cout<<"\n";
    }
    return 0;
}
