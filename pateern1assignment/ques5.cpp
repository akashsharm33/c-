#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=2;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}