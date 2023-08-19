#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number";
    cin>>n;
    bool flag = true;//means prime
    for(int i=2;i<=n-1;i++){
        if(n%i==0){ //i is factor of n
             flag=false;//compoiste
            break;
        }

    }
    if(n==1)cout<<n<<"neither prime nor composite";
    else if(flag==true)cout<<n<<"prime";
    else cout<<n<<"composite number";

}