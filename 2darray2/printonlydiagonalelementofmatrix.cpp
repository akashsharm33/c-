#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(i==j||i+j==n-1){
            cout<<arr[i][j];
           }
           else{
            cout<<" ";
           }
        }
        cout<<endl;
    }

}