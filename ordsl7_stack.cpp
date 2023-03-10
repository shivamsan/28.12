#include <iostream>
using namespace std;

#define n 10


class Stack
{
   
   int top=-1;
   int stack[n];

    
public:
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else 
   {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
void display() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"Stack elements are: ";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   }
}


};

int main() {

    Stack s;
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            s.push(val);
            break;
         }
         case 2: {
            s.pop();
            s.display();
            break;
         }
         case 3: {
            s.display();
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
