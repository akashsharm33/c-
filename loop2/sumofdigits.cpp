#include<iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"enter number";
    cin>>n;
    int sum=0;
    while(n>0){
        d=n%10;
        sum=sum+d;
        n=n/10;

    }
    cout<<sum;
}