#include <iostream>

using namespace std;

int main()
{
    int marks,index;
    cout<<"\t\t\tPlease enter your marks = ";
    cin>>marks;
    index=marks/10;
    switch(index){
    case 10:
    case 9:
    case 8:
        cout<<"\t\t\tYou got A grade";
        break;
    case 7:
    case 6:
        cout<<"\t\t\tYou got B grade";
        break;
    case 5:
        cout<<"\t\t\tYou got C grade";
        break;
    case 4:
        cout<<"\t\t\tYou got D grade";
        break;
    default:
        cout<<"\t\t\tYou got F grade";
    }
    cout<<"\t\t\tDone!!!!!";
    return 0;
}
