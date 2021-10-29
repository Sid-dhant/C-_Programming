#include <iostream>
#include <cmath>
using namespace std;

//deleting element in a array.
int main()
{
    int arr[100],n,i,ele,posi;
    cout<<"Enter the size of the array = ";
    cin>>n;
    cout<<"Enter the array = \n";
    for(i=0;i<n;i++)
        cin>>arr[i];

    cout<<"Enter the position = ";
    cin>>posi;

    for(i=posi-1;i<=n-1;i++){
        arr[i]=arr[i+1];
    }

    for(i=0;i<n-1;i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n\n\t\t\tDone!!!!";
}
