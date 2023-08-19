#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter numbee you need to find out the table";
    cin>>n;
    for(int i=n;i<=n*10;i=i+n){
        cout<<i<<endl;
    }
}