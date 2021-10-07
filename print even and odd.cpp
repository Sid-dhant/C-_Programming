#include <iostream>

using namespace std;

int main()
{
    int start,finish,i;
    cout<<"\t\t\tEnter the 1st limit  = ";
    cin>>start;
    cout<<"\t\t\tEnter the 2st limit  = ";
    cin>>finish;
    //for odd
    for(i=start+1;i<finish;i++)
    {
        if(i%2!=0)
            cout<<"\n\t\t\t"<<i<<" is odd";
    }
    cout<<"\n";
    //for even
    for(i=start+1;i<finish;i++)
    {
        if(i%2==0)
            cout<<"\n\t\t\t"<<i<<" is even";
    }

    cout<<"\n\n\t\t\tDone!!!!!";
    return 0;
}
