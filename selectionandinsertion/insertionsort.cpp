#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1&&arr[j]<arr[j-1]){ //j>=1 so that index get not out of bound;
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}