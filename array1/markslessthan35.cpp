#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of students";
    cin>>n;
    int arr[n];
    cout<<"enter marks";
    for(int i=0;i<=n-1;i++){
        cout<<"enter marks";
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i]<35){
            cout<<i;
        }
    }
}