#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i-1;k++){
            cout<<" ";
        }
        for(int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}