#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter lines";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            cout<<" ";
        }
        nsp--;
        for(int j=1;j<=nst;j++){
            cout<<j;
        }
        nst+=2;
        cout<<endl;
    }
}