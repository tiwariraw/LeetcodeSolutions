#include<iostream>
#include<cstring>

using namespace std;
int main(){

char s1[50] = "Good";
char key;
cout<<"Enter a character/key to find in the main string"<<endl;
cin>>key;
if(strchr(s1,key) != NULL)
cout<<strchr(s1,key)<<endl;
else
cout<<"Not Found"<<endl;

// char s1[50] = "Good";
// char key;
// cout<<"Enter a character/key to find in the main string"<<endl;
// cin>>key;
// if(strrchr(s1,key) != NULL)
// cout<<strrchr(s1,key)<<endl;
// else
// cout<<"Not Found"<<endl;

return 0;
}