#include <iostream>
#include <cstring>
using namespace std;

struct student
{
    char name[100];
    int roll_no;
    double m1,m2,m3;
    void input()
    {
        cout<<"enter all the details\n";
        cin>>name;
        cin>>roll_no;
        cout<<"Enter the marks of 1st subject = ";
        cin>>m1;
        cout<<"Enter the marks of 2nd subject = ";
        cin>>m2;
        cout<<"Enter the marks of 3rd subject = ";
        cin>>m3;
    }
    void display()
    {
        cout<<"\n\n\nall the details are\n";
        cout<<name<<endl;
        cout<<roll_no<<endl;
        cout<<"the marks of 1st subject = ";
        cout<<m1;
        cout<<"the marks of 2nd subject = ";
        cout<<m2;
        cout<<"the marks of 3rd subject = ";
        cout<<m3;
    }

};



int main()
{
    cout<<"enter the no. of students =\n";
    int n,i;
    cin>>n;
    student s[n];
    double avg[n];
    for(i=1;i<=n;i++){
        cout<<"student "<<i<<"\n";
        s[i].input();
        avg[i]=(s[i].m1+s[i].m2+s[i].m3)/3;
    }
    if(avg[1]<(avg[2]&&avg[3])){
        s[1].display();
        if(avg[2]<avg[3]){
            s[2].display();
            s[3].display();
        }
        else{
            s[3].display();
            s[2].display();
        }
    }

    else if(avg[2]<(avg[1]&&avg[3])){
        s[2].display();
        if(avg[1]<avg[3]){
            s[1].display();
            s[3].display();
        }
        else{
            s[3].display();
            s[1].display();
        }
    }

    else{
        s[3].display();
        if(avg[1]<avg[2]){
            s[1].display();
            s[2].display();
        }
        else{
            s[2].display();
            s[1].display();
        }
    }


    return 0;
}
