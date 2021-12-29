#include<stack>
#include<bits/stdc++.h>
using namespace std;

class queues
{
    int Front,rear,arr[3];
public:
    queues()
    {
       Front=-1;
       rear=-1;
       for(int i=0;i<3;i++)
           arr[i]=0;
    }

    bool isEmpty()
    {
        if(Front=rear=-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(rear==2)
            return true;
        else
            return false;
    }
    void enqueue(int val)
    {
        if(isFull())
            cout<<"\nQueue is full";
        else if(isEmpty())
            rear=Front=0;
        else
            rear++;
        arr[rear]=val;
    }
    int dequeue()
    {
        int x=0;
        if(isEmpty())
        {
            cout<<"\nQueue is empty";
            return 0;
        }
        else if(rear=Front)
        {
            x=arr[Front];
            arr[Front]=0;
            Front=rear=-1;
        }
        else
        {
            x=arr[Front];
            arr[Front]=0;
            Front++;
        }
        return x;
    }
    void display()
    {
        cout<<"Queue is : ";
        for(int i=0;i<3;i++)
            cout<<" "<<arr[i];
    }
};

int main() {
   queues q;
   int option,val1,val2;

   do {
      cout<<"1) Insert element to queue"<<endl;
      cout<<"2) Delete element from queue"<<endl;
      cout<<"3) Display all the elements of queue"<<endl;
      cout<<"4) isEmpty"<<endl;
      cout<<"5) isFull"<<endl;

      cout<<"6) Exit"<<endl<<"\n\n";
      cout<<"Enter your choice : "<<endl;
      cin>>option;
      switch (option) {
         case 1:
         {
             cout<<"\nEnter the value = ";
             cin>>val1;
             q.enqueue(val1);
             break;
         }

         case 2:
         {
             val2=q.dequeue();
             cout<<"\nElement dequeued is "<<val2;
             break;
         }
         case 3:
         {
             q.display();
             break;
         }
         case 4:
         {
             cout<<"\nIt is "<<q.isEmpty()<<" that queue is empty";
             break;
         }
         case 5:
         {
             cout<<"\nIt is "<<q.isFull()<<" that queue is Full";
             break;
         }
         case 6:
         {
             cout<<"\nYou have exited";
             exit(0);
             break;
         }
         default: cout<<"Invalid choice"<<endl;
      }
   } while(option!=6);

	return 0;
}
