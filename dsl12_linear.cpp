#include<iostream>
using namespace std;

int linear(int a[], int n, int key)
{
    int flag=0;
    for (int i=0; i<n; i++)
    {
        if (a[i] == key)
        {
        cout<<"Found at "<<(i+1)<<"th position"<<endl;
        flag =1;
        break;
        
        }   
    }
    
    if(flag==0)
    {
        cout<<"student no found"<<endl;
    }

}

int main()
{
    int n;
    cout<<"Enter number of students : "<<endl;
    cin>>n;
    
    int a[n];
    cout<<"Enter roll num of students :"<<endl;
    for (int i =0;i<n;i++)
    {
        cin>>a[i];
    }

    int key;
    cout<<"Enter roll no of student to search : "<<endl;
    cin>>key;

    linear(a,n,key);
    return 0;

}
