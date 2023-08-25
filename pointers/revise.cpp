#include<iostream>
using namespace std;
int main(){
    int x=4;
    int*ptr1=&x;
    int**ptr2=&ptr1;
    int***ptr3=&ptr2;
    int****ptr4=&ptr3;
    cout<<x<<endl<<*ptr1<<endl<<**ptr2<<endl<<***ptr3<<endl<<****ptr4;
}