#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int arr[5],i,first=0,last=5-1,middle=0,ele;
    cout<<"enter the values of array in ascending order\n";
    for(i=0;i<5;i++)
        cin>>arr[i];
    cout<<"\n\nthe array in ascending order is\n";
    for(i=0;i<5;i++)
        cout<<"  "<<arr[i];
    cout<<"\n\nEnter the element you want to search = ";
    cin>>ele;
    while(first<=last)
    {
        middle=(first+last)/2;
        if(arr[middle]>ele)
        {
            last=middle-1;
        }
        else if(arr[middle]<ele)
        {
            first=middle+1;
        }
        else
        {
            cout<<"position of "<<ele<<" is "<<middle+1;
            break;
        }
    }
    if(first>last)
        cout<<ele<<" is not present in array";

    cout<<"\n\n\t\t\tDone!!!!";
}
