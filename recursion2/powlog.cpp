#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==1)return x;//3 ki power 1 3 he hota hai bhai;
    int ans=pow(x,n/2);
    if(n%2==0)return ans*ans;
    else return ans*ans*x;
}

int main(){
    cout<<pow(3,8);
}