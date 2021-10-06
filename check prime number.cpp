#include <iostream>

using namespace std;

int main()
{
    int num,i,flag=0;
    cout<<"\t\t\tEnter the number to check = ";
    cin>>num;
    if(num==1)
        cout<<"\t\t\t1 is not a prime no.";
    else if(num==2)
        cout<<"\t\t\t2 is a prime no.";
    else
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"\t\t\t"<<num<<" is a prime number";
        else
            cout<<"\t\t\t"<<num<<" is not a prime number";
    }
    cout<<"\n\t\t\tDone!!!!!";
    return 0;
}
