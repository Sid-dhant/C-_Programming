#include<iostream>
using namespace std;

int main()
{
    int arr[10][10],i,j,n,sumd1=0,sumd2=0,flag=0,sumR,sumC;
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
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++) 
        {
          cout<<"  "<<arr[i][j];
        }
       cout<<"\n";
    }
    // to find sum of primary diagnals
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++) 
        {
          if(i==j)
          {
            sumd1=sumd1+arr[i][i];
          }
          if(j==n-(i+1))
          {
            sumd2=sumd2+arr[i][j];
          }
        }
    }
    if(sumd1!=sumd2)
    {
      cout<<"Matrix is not a magic square";
    }
    else
    {
      for(i=0;i<n;i++)
      {
        sumR=0;
        sumC=0;
        for(j=0;j<n;j++) 
        {
          sumR=sumR+arr[i][j];
          sumC=sumC+arr[j][i];
        }
      }
        if(sumR!=sumC)
        {
          cout<<"Matrix is not a magic square";
        }
        else
        {
          flag=1;
        }
    }
    if(flag)
    {
      cout<<"Matrix is a magic square";
    }
    return 0;
}
