#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    int r=0;
    int lastdigit=0;
    while(n>0){
        lastdigit=n%10;
        r=r*10;
        r=r+lastdigit;
        n=n/10;
        
    }
    cout<<r;
}