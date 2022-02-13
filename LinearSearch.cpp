#include<iostream>
using namespace std;
int main(){

int size,key;
cout<<"Enter the size of array"<<endl;
cin>>size;
int A[size];
cout<<"Enter the elements of the array"<<endl;
for (int i=0; i<size;i++){
    cin>>A[i];
}
cout<<"Enter the key you want to search"<<endl;
cin>>key;
for (int i = 0; i < size; i++)
{
    if(key==A[i]){
    cout<<"Key is Present at index: "<<i<<endl;
    return 0;
}
}
cout<<"Key is Absent"<<endl;

return 0;
}