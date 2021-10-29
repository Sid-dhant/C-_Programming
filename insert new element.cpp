#include <iostream>
#include <cmath>
using namespace std;

//inserting element in a array.
int main()
{
    int arr[100],n,i,ele,posi;
    cout<<"Enter the size of the array = ";
    cin>>n;
    cout<<"Enter the array = \n";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the element = ";
    cin>>ele;
    cout<<"Enter the position = ";
    cin>>posi;
    for(i=n-1;i>=posi-1;i--){
        arr[i+1]=arr[i];
    }
    arr[posi-1]=ele;
    for(i=0;i<=n;i++)
    {
        cout<<" "<<arr[i];
    }

    cout<<"\n\n\t\t\tDone!!!!";
}
