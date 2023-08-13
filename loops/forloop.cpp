#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter your sp";
    cin>>sp;
    cout<<"enter your cp";
    cin>>cp;
    if(sp>cp){
        cout<<"profit=  "<<sp-cp;
    }
    if(cp>sp){
        cout<<"loss= "<<cp-sp;
    }
    if(sp==cp)
    {
        cout<<"no loss or profit";
    }
}