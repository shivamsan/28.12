#include<iostream> 
using namespace std; 
int main() 
{ 
int r,c,i,j,ch; 
int mul[10][10]; 
cout<<"\nEnter no.of rows: "; 
cin>>r; 
cout<<"Enter no. of columns: "; 
cin>>c; 
int a[10][10],b[10][10],d[10][10]; 
cout<<endl<<"Enter elements of first matrix: "; 
//Accepting and displaying 2 matrices 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
cin>>a[i][j]; 
} 
} 
cout<<endl<<"Enter elements of second matrix: "; 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
cin>>b[i][j]; 
} 
} 
cout<<"Your 1st entered Matrix is: "<<endl; 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
cout<<a[i][j]<<" "; 
} 
cout<<endl; 
} 
cout<<"Your 2nd entered Matrix is: "<<endl; 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
cout<<b[i][j]<<" "; 
} 
cout<<endl; 
} 
int flag=0; 
while(flag==0) 
{ 
cout<<"\t1. Addition of Matrix"<<endl; 
cout<<"\t2. Subtraction of Matrix"<<endl; 
cout<<"\t3. Transpose of Matrix A"<<endl; 
cout<<"\t4. Multiplication of matrices"<<endl; 
cout<<"\t5. Exit"<<endl; 
cout<<"Enter your choice: "<<endl; 
cin>>ch; 
switch(ch) 
{ 
case 1: 
//Addition of matrix 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
d[i][j]=a[i][j]+b[i][j]; 
} 
} 
 
 
//display of addition 
cout<<"Addition of entered 2 matrices is: "<<endl; 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
cout<<d[i][j]<<" "; 
} 
cout<<endl; 
} 
break; 
 
case 2: 
//subtraction of matrix 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
d[i][j]=a[i][j]-b[i][j]; 
} 
} 
 
 
//display of subtraction 
cout<<"Subtraction of entered 2 matrices is: "<<endl; 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
cout<<d[i][j]<<" "; 
} 
cout<<endl; 
} 
break; 
 
case 3: 
//Transpose of matrix 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
d[i][j]=a[j][i]; 
} 
} 
 
//display A transpose 
cout<<"Transpose of 1st matrix is: "<<endl; 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
cout<<d[i][j]<<" "; 
} 
cout<<endl; 
} 
break; 
 
case 4: 
//Multiplication of matrix 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ mul[i][j]=0; 
for(int k=0;k<c;k++) 
{ 
mul[i][j]=mul[i][j]+a[i][k]*b[k][j]; 
} 
} 
} 
//Display multiplication 
cout<<"Multiplication of 1st matrix is: "<<endl; 
for(i=0;i<r;i++) 
{ 
for(j=0;j<c;j++) 
{ 
cout<<mul[i][j]<<" "; 
} 
cout<<endl; 
} 
break; 
 
case 5: 
flag=1; 
break; 
 
default: 
cout<<"Invalid Input"; 
} 
} 
 
return 0; 
}