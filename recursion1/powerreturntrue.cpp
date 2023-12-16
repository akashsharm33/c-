#include<iostream>
using namespace std;
int pow(int a,int b){
if(a==2)return true;
    if(b==0)return 1;

    return a*pow(a,b-1);

}
int main(){
    int a,b;
    cout<<"enter base and exponent";
    cin>>a>>b;
    cout<<pow(a,b);
}