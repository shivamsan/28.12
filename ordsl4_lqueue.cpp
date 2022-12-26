#include<iostream>
using namespace std;

class  queue
{
    
    const static int size = 10;
    int start = -1;
    int end = -1;
    int array[size];
    public:

    void push(int x)
    {
        if (end ==size-1)
        {
            cout<<"queue is full"<<endl;
            
        }
        end++;
        array[end]=x;
    }

    int pop()
    {
        if (start == end)
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        start++;
        return array[start];
    }

    void display()
    {
        if (start == end)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            cout<<"queue contains: "<<endl;
            for (int i = start+1; i <= end; i++)
            {
                cout<<array[i]<<" ";

            }
            
        }
        cout<<endl;

        
    }
    
};
int main()
{
     queue q;


    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.display();
    cout<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    
   int ch, val;
   cout<<"1) enqueue"<<endl;
   cout<<"2) dequeue"<<endl;
   cout<<"3) Display display"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be inserted:"<<endl;
            cin>>val;
            q.push(val);
            break;
         }
         case 2: {
            q.pop();
            break;
         }
         case 3: {
            q.display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}