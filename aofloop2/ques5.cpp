#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int ld=0;
    int sum=0;
    for(int i=1;i<=n;i++){
    
            ld=n%10;
            if(ld%2==0){
            sum=sum+ld;}
            n=n/10;

        }
  cout<<sum;

}