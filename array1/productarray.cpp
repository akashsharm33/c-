#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter array size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p =1;
    for(int i=0;i<n;i++){
        p=p*arr[i];
    }
    cout<<p;

}