#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter chareacter";
    cin>>ch;
    int ascii=(int)ch;
    if((ascii>=65&&ascii<=90)){
        cout<<"large";
    }
    else if(ascii>=97&&ascii<=122){
        cout<<"small";
    }
    else if(ascii>=48&&ascii<=57){
        cout<<"digits";
    }
    else{
        cout<<"special symbols";
    }
}