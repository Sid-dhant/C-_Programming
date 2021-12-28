#include <iostream>
#include<string>

using namespace std;

class stack{
    int arr[10];
    int top;
public:
    stack()
    {
        top=-1;
        for(int i=0;i<10;i++)
            arr[i]=0;
    }
    bool Is_empty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool Is_full()
    {
        if(top==(10-1))
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if(Is_full())
            cout<<"Stack overflow";
        else
        {
            top++;
            arr[top]=val;
        }
    }
    int pop()
    {
        if(Is_empty()){
            cout<<"Stack underflow";
            return 0;
        }
        else
        {
            int popval=arr[top];
            arr[top]=0;
            top--;
            return popval;
        }
    }

    void display()
    {
        cout << "All values in the Stack are " << endl;
        for(int i=(10-1);i>=0;i--)
            cout<<arr[i]<<endl;
    }
};

int main()
{
    int option,position,value;
    stack s1;
    do{
            cout<<"\n\n";
            cout<<"1) Push in stack"<<endl;
            cout<<"2) Pop from stack"<<endl;
            cout<<"3) Is_empty"<<endl;
            cout<<"4) Is_full"<<endl;

            cout<<"5) Display"<<endl;
            cout<<"0) Exit"<<endl;
            cin>>option;
            switch(option)
            {
            case 0:
                exit;
            case 1:
                cout << "Enter an item to push in the stack" << endl;
                cin >> value;
                s1.push(value);
                break;
            case 2:
                cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
                break;
            case 3:
                if (s1.Is_empty())
                    cout << "Stack is Empty" << endl;
                else
                    cout << "Stack is not Empty" << endl;
                break;
            case 4:
                if (s1.Is_full())
                    cout << "Stack is Full" << endl;
                else
                    cout << "Stack is not Full" << endl;
                break;


            case 5:
                cout << "Display Function Called - " << endl;
                s1.display();
                break;
            }


    }while(option!=0);
    return 0;
}
