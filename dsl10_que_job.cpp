#include<iostream>
using namespace std;
#define size 10

class  queue
{
       
    int start = -1;
    int end = -1;
    int array[size];

    public:

    void add_job(int x)
    {
        if (end ==size-1)
        {
            cout<<"queue is full"<<endl;
            
        }
        end++;
        array[end]=x;
    }

    int del_job()
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

queue obj;
int ch,x;
do{
cout<<"\n====MENU====\n 1.Insert Job\n 2.Delete Job\n 3.Display\n 4.Exit\n Enter your choice : "; 
cin>>ch;
switch(ch)
{ case 1:
    cout<<"\n Enter data : ";
    cin>>x;
    obj.add_job(x);
    cout<<endl;
    break;
case 2: 
    cout<<"\n Deleted Element = "<<obj.del_job()<<endl;
    obj.display();
    break;
case 3: 
    cout<<"\n Queue contains : ";
    obj.display();
    break;


case 4: 
    cout<<"\n Exiting Program.....";
    break;

default:
    cout<<"\n Invalid Input";
    break;
}
}while(ch!=4);
return 0;
}
