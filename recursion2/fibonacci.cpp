#include<iostream>
using namespace std;
int fibo(int n){
    // 1 1 2 3 5 8 13 21 34 55 89
    if(n==1||n==2)return 1;// n is  positon;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    cout<<fibo(8);//wich term at 8th position 
}