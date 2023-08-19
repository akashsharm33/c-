#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout<<"enter n";
    cin>>n;
    int a=n;
    while(n>0){
        n=n/10;
        count++;
    }
    if(a==0)cout<<1;
    else cout<<count;
    
}