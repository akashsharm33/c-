#include<iostream>
using namespace std;
int main(){
    char ch;
    int a,b,c;
    cout<<" enter two operand";
    cin>>a>>b;
    cout<<"enter operators + for add - for sub";
    cin>>ch;
    switch(ch){
        case '+':
        c=a+b;
        cout<<c;
        break;
        case '-':
        c=a-b;
        cout<<c;
        break;
        default:
        cout<<"wrong input";
        
    }
}