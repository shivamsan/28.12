#include<iostream>
using namespace std;

void swap(float arr[], int i ,int j)
{
    float temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;

}

int partition(float arr[], int l, int r)
{
    float pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i+1;
}

void quicksort(float arr[], int l,int r)
{
    if(l<r)
    {
        int pi = partition(arr, l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);

    }
}

int main()
{
    cout<<"enter number of students "<<endl;
    int n,i,temp;
    cin>>n;
    float arr[n];
    //int arr[5]= {5,8,7,4,1};
    cout<<"Enter the roll number of SE students"<<endl;
    for (i=0;i<n;i++)
    {
        cin >> arr[i];

    }

    quicksort(arr,0,n-1);
    cout<<"sorted list: ";
    for(int i=0;i<n;i++)
    {
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    cout<<"top 5:  ";

    for(int i=n-1;i>n-6;i--)
    {
        
        cout<<arr[i]<<" ";
    }
    return 0;
}
