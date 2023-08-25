#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int permutation(int n,int r){
    int npr=fact(n)/fact(n-r);
}
int combination(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int addition(int n,int r){
    int add=n+r;
    return add;
}
int substraction(int n,int r){
    int subs=n-r;
    return subs;
}
int multiplication(int n,int r){
    int mul=n*r;
    return mul;
}
int main(){
    int n,r;
    cout<<"enter n";
    cin>>n;
    cout<<"enter r";
    cin>>r;
    int ncr=combination(n,r);
    int npr=permutation(n,r);
    int add=addition(n,r);
    int subs=substraction(n,r);
    int mul=multiplication(n,r);
    cout<<ncr<<endl;
    cout<<npr<<endl;
    cout<<subs<<endl;
    cout<<mul<<endl;
    cout<<add<<endl;

    
}
