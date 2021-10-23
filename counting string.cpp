#include <iostream>
#include <cmath>
using namespace std;

//size of a string.
int main()
{
    char str[80];
    int i=0,counting=0;
    cout<<"Enter = ";
    cin.get(str,80);
    cout<<str<<endl;
    while(str[i]!='\0')
    {
        counting++;
        i++;
    }
    cout<<"Length of the string is = "<<counting;

    cout<<"\n\n\t\t\tDone!!!!";
}
