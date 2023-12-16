#include<iostream>
#include<climits>
using namespace std;
void printMax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx])max=arr[idx];
    printMax(arr,n,idx+1,max);//max is updated;
}
//function to store max value;
// int maxinarray(int arr[],int n,int idx){
//     if(idx==n)return INT_MIN;
//     return max(arr[idx],maxinarray(arr,n,idx+1));//
// }

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    printMax(arr,n,0,INT_MIN);//0 is initial index;
    // cout<<maxinarray(arr,n,0);
}