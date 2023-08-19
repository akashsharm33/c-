#include<iostream>
using namespace std;
int main(){
   int n;
    cout<<"enter n";
    cin>>n;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            if(i==1)cout<<1;
            else if(i==2)cout<<2;
            else if(i==3)cout<<3;
            else if(i==4)cout<<4;
        }
        cout<<endl;
    }
}