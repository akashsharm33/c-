#include<iostream>
using namespace std;
int main(){
    int ch;
    int a,b,c;
    cout<<" enter two numbers";
    cin>>a>>b;
    cout<<"enter your choice 1 for add 2 for sub 3 for mul 4for divide";
    cin>>ch;
    switch(ch){
        case 1:
        c=a+b;
        cout<<c;
        break;
        case 2:
        c=a-b;
        cout<<c;
        break;
        default:
        cout<<"wrong input";
        
    }
}