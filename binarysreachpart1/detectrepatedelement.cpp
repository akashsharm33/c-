#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid+1)lo=mid+1;//logic
        if(arr[mid]==mid){//logic
            if(arr[mid]==arr[mid-1]){
            flag=true;
            cout<<arr[mid];
            break;
        }
        else{
            hi=mid-1;
        }
        }
    }
}