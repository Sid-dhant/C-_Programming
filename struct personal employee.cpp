#include <iostream>
#include <cstring>
using namespace std;
struct personal{
  char name[100];
  int date_of_joining;
  float salary;
};

int main()
{
    personal E1,E2,E3;
    cout<<"Employee.1 please enter all details: \n";
    cin>>E1.name>>E1.date_of_joining>>E1.salary;
    cout<<"Employee.2 please enter all details: \n";
    cin>>E2.name>>E2.date_of_joining>>E2.salary;
    cout<<"Employee.3 please enter all details: \n";
    cin>>E3.name>>E3.date_of_joining>>E3.salary;
    if(E1.salary>E2.salary&&E1.salary>E3.salary)
        cout<<"Name = "<<E1.name<<"\nDate of joining = "<<E1.date_of_joining<<"\nSalary = "<<E1.salary;
    else if(E2.salary>E1.salary&&E2.salary>E3.salary)
        cout<<"Name = "<<E2.name<<"\nDate of joining = "<<E2.date_of_joining<<"\nSalary = "<<E2.salary;
    else
        cout<<"Name = "<<E3.name<<"\nDate of joining = "<<E3.date_of_joining<<"\nSalary = "<<E3.salary;
    return 0;
}
