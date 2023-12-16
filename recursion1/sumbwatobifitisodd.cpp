#include<iostream>
using namespace std;
void sum(int a,int b){
    if(a>b)return;
    if(a%2!=0)cout<<a<<endl;
    sum(a+1,b);
}
int main(){
    int a,b;
    cin>>a>>b;
sum(a,b);
}