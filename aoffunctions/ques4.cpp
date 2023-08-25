#include<iostream>
using namespace std;
int countdigitsq(int n){
    int count=0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count*count;
}
int main(){
    int n;
    cin>>n;
    int a=countdigitsq(n);
    cout<<a;
}