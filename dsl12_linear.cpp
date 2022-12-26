#include<iostream>
using namespace std;

int main()
{
    int a[100],n, key ,i,flag=0;
    
    cout << "enter total number of SE students numbers "<<endl;
    cin >> n;
    
    cout<<"Enter the roll number of SE students"<<endl;

    for (i=0;i<n;i++)
    {
        cin >> a[i];

    }
    cout <<"enter roll no of student to be search"<<endl;
    cin>>key;

    for(i=0;i<n;i++)
    {
        if (a[i]==key)
        {
            cout<<"student found at position: "<<(i+1)<<endl;
            flag =1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"roll no not found"<<endl;

    }
    return 0;
}