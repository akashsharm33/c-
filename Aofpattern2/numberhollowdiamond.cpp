#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++){ //3spacs ke liye
        cout<<" ";
    }
    cout<<1;
    cout<<endl;
    //upper triangle
    for(int i=2;i<=n-1;i++){
        //spaces
    for(int j=1;j<=n-i;j++)
        cout<<" ";
        cout<<i;
    
    //lower triangle
    for(int j=1;j<=2*(i-1)-1;j++)
        cout<<" ";
        cout<<i;
    
    cout<<endl;
    }

    for(int i=1;i<n;i++){
        //spaces
        for(int j=1;j<i;j++)cout<<" ";
        cout<<i;
        int m=2*(n-i);
        for(int j=1;j<m;j++)cout<<" ";
        cout<<i;
        cout<<endl;
    }
        for(int i=1;i<n;i++)cout<<" ";
        cout<<4;

    }
    
