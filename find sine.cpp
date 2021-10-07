#include <iostream>

using namespace std;

int main()
{
    int i, n;
    float x, sum, temp=1 ,num,denum,term;

    cout<<"\t\t\tEnter the value for x : ";
    cin>>x;

    cout<<"\t\t\tEnter the value for n : ";
    cin>>n;

    x=x*3.14159/180;
    num=1;
    denum=1;
    sum=1;

    /* Loop to calculate the value of Sine */
    for(i=2;i<=n;i++)
    {
        num=num*x*x;
        denum=denum*((i*2)-2)*((2*i)-3);
        temp=temp*(-1);
        term=(num/denum)*temp;
        sum=sum+term;
    }

    cout<<"\t\t\tThe value of Sin("<<x<<") is "<<sum;
    cout<<"\n\n\t\t\tDone!!!!";
}
