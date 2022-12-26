#include<iostream>
using namespace std;

int main()

{
    int a[100],n,i,key,ub,lb,mid,flag=0;
    cout << "enter total number of SE students numbers "<<endl;
    cin >> n;

    
    cout<<"Enter the roll number of SE students"<<endl;
    for (i=0;i<n;i++)
    {
        cin >> a[i];

    }
    cout <<"enter roll no of student to be search"<<endl;
    cin>>key;

    lb = 0,ub =n;
    while(ub<=n)
    {

        mid = (lb+ub)/2;
        if (key == a[mid])
        {
            cout<< "student found at position: "<<(mid+1)<<endl;
            flag =1;
            break;
        }
        else
        {
            if(key<a[mid])
            {
                ub = mid-1;

            }
            if (key>a[mid])
            {
                ub = mid +1;
            }
        }
    }
    if (flag==0)
    {
        cout<<"roll no not found"<<endl;

    }
    return 0;
}
