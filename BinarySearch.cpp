#include<iostream>
using namespace std;
int main(){

//If taking input array from user, first sort the array and then apply Binary Search
int A[10] = {2,5,8,10,15,20,24,28,32,36};
int l=0,h=9,mid,key;
cout<<"Enter key to search the location for: "<<endl;
cin>>key;
while (l<=h){
    mid = l + (h-l)/2;
    if (key == A[mid]){
        cout<<"Found at: "<<mid<<endl;
        return 0;
    }else if (key > A[mid]){
        l = mid+1;
    }else {
        h = mid-1;
    }
    
}

cout<<"Not Found"<<endl;
return 0;
}