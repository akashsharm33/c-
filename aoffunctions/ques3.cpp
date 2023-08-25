#include<iostream>
using namespace std;
int odd(int a,int b){
    for(int i=a+1;i<b;i++){
        if(i%2!=0)
        cout<<i;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int od=odd(a,b);
}