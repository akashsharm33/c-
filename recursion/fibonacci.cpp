#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)
    {
        return n;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n,fibonacci;
    cout<<"enter n";
    cin>>n;
    fibonacci=fib(n);
    cout<<fibonacci;

}