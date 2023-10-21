#include<iostream>
using namespace std;
int main(){
    int x=7;
    int*ptr=&x;
    cout<<ptr<<endl;
    ptr=ptr+1; //4bit aage kiskak jata hai ye;
    cout<<ptr<<endl;
}