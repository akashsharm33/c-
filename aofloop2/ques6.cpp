#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int ld=0;
    int r=0;
    int m=n;
    while(m>0){
        ld=m%10;
        r=r*10;
        r=r+ld;
        m=m/10;
    

    }
    cout<<n+r;


}