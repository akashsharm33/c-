#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of lines";
    cin>>n;
    for(int i=1;i<n;i++){
        cout<<" ";
    }
    cout<<i;
    cout<<endl;
    for(int i=2;i<n;i++){
        for(int j=1;j<=n-i;j++)
        cout<<" ";
        cout<<j;
        for(int j=1;j<=2*(i-1)-1;j++)cout<<" ";
        cout<<j;
        cout<<endl;
    }
    
}