#include<iostream>
using namespace std;
int main(){
    int n,m,d;
    int sum=0;
    cout<<"enter n";
    cin>>n;
    m=n;
    while(m>0){
        d=m%10;
        sum=sum+(d*d*d);
        m=m/10;

    }
    if(sum==n)cout<<"it is armsteong";
    else cout<<"not armstrong";
}