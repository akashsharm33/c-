#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"enter character of no of dayin week";
    cin>>ch;
    switch(ch){
        case 1:
        cout<<"mon";
        break;
        case 2:
        cout<<"tue";
        break;
        case 3:
        cout<<"wed";
        break;
        case 4:
        cout<<"thu";
        break;
        case 5:
        cout<<"fri";
        break;
        case 6:
        cout<<"sat";
        break;
        case 7:
        cout<<"sun";
        break;
        default:
        cout<<"wrong input";
    }
}