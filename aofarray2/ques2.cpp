#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>smax&&arr[i]!=max)smax=arr[i];
    }
    int tmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>tmax&&arr[i]!=smax&&arr[i]!=max)tmax=arr[i];
    }
    cout<<max;
    cout<<smax;
    cout<<tmax;
}
