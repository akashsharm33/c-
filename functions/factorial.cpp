#include<iostream>
using namespace std;
int fact(){
    int n;
    cout<<"enter n";
    cin>>n;
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
        cout<<f<<endl;
    }
    

}
int main(){
    fact();

}