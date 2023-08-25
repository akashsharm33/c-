#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){ // n nhi lena kyuki last row nhi print karni;
        //spaces
        for(int j=1;j<i;j++)cout<<" "; //j<i becsuse only one star;
        cout<<"* ";
        int m=2*(n-i); //spaces
        for(int j=1;j<m;j++)cout<<" "; //7 spaces
        cout<<"* ";
        cout<<endl;
    }
        for(int i=1;i<n;i++)cout<<" ";
        cout<<"* ";
        
    }
