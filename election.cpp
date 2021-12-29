#include <iostream>

using namespace std;

class election
{
public:
    char name[10];
    float votes_recieved;
    void display()
    {
        float votes_total=200;
        float votes_Percent;
        cout<<"\n\n\nName of the candidate is "<<name;
        cout<<"\nNo. of votes recieved = "<<votes_recieved;
        votes_Percent=((votes_recieved/votes_total)*100);
        cout<<"\nPer-cent of votes recieved = "<<votes_Percent;
    }


};


int main()
{
    election c[3];
    int largest;
    for(int i=1;i<=3;i++)
    {
        cout<<"\n\nenter the name of candidate."<<i<<" = ";
        cin>>c[i].name;
        cout<<"No. of votes recieved = ";
        cin>>c[i].votes_recieved;
        c[i].display();
    }
    largest=1;
    for(int j=1;j<=3;j++)
    {
        if(c[largest].votes_recieved<c[j].votes_recieved)
            largest=j;
    }
    cout<<"\nSo, the winner is "<<c[largest].name;
    return 0;
}
