#include<iostream>
using namespace std;
//include<climits>
int main(){
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int max=arr[0];// initialize with 0 //INT_MIN
    for(int i=1;i<=n-1;i++){
        if(max<arr[i])max=arr[i];
    }
    cout<<max;
}