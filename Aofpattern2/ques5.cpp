#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
        cout<<123321;
        cout<<endl;
        int m=n-1;
        int nsp=n-1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=m+1-i;j++){
                cout<<j;
            }
            for(int k=1;k<=nsp;k++){
                cout<<" ";
            }
            nsp+=2;
            for(int j=i;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
    }
}
