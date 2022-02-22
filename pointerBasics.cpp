#include<iostream>
using namespace std;
int main(){

int size ;
cout<<"Enter number of elements"<<endl;
cin>>size;
// //Array is created of dynamic size depending on the user in stack
// int A[size];
// cout<<sizeof A<<endl; 
// //But if we want to again change the size,then it is not possible
// size = 35;
int *p = new int[size];
//some code
//before making the pointer point to another array of new size, delete the previous array to avoid memory leak
delete []p;
cout<<"Enter new size"<<endl;
cin>>size;
p = new int[size];
return 0;
}

////Pointer Arithmetic

// int main()
// {
//     int A[5]={2,4,6,8,10};
//     int *p = A;
//     int *q = &A[3];

//     //1.
//     p++;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<endl;

//     //2.
//     p--;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<endl;

//     //3.
//     p = p+2;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<endl;

//     //4.
//     p = p-2;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<endl;

//     //5.
//     cout<<q-p<<endl;
//     cout<<q-p<<endl;
   
//     return 0;
// }
