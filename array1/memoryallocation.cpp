#include<iostream>
using namespace std;
int main(){
    int arr[5]; // array first element address is the address of whole array;
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    cout<<&arr[2]<<endl;
    cout<<&arr[3]<<endl;
    cout<<&arr[4]<<endl;
    cout<<&arr;
}