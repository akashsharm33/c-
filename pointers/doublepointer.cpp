#include<iostream>
using namespace std;
int main(){
    int x=5;
    int*ptr=&x;
    int**p=&ptr;
    cout<<&x<<endl;
    cout<<ptr<<endl;//x ka address
    cout<<*p<<endl;//ptr ka address
    cout<<**p;
}