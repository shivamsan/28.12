#include<iostream>
using namespace std;

int binary(int a[], int n , int key)
{
    int s=0,flag =0;
    int e=n;
    while(s<=e)
    {
        int mid = (s+e)/2;

        if(a[mid]==key)
        {
            cout<<"Found at "<<(mid+1)<<"th position"<<endl;
            
            flag = 1;
            break;
            
        }
        else if(a[mid]>key)
        {
            e = mid-1;

        }
        else
        {
            s = mid+1;
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

    binary(a,n,key);
    return 0;

}
