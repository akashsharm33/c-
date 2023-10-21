#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={5,0,0,3,2,1};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        //n-1passes kyuki last ke age kuch nhi hau compare ke liye
        //trevserse
        for(int j=0;j<n-1-i;j++){//j=0;j<n-1;j++ less optimize
            if(arr[j]==0){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;

                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}