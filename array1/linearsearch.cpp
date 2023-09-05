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
    int x;
    cout<<"enter element you want";
    cin>>x;
    //checkmark  
    bool flag= false; //not present;  
    for(int i=0;i<n;i++){
        if(arr[i]==x)flag=true;
    }
    if(flag==true)cout<<"element found";
    else cout<<"not found";

}