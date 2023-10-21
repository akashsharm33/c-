#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter row of matrix 1";
    cin>>m;
    int n;
    cout<<"enter column of matrix 1";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // wave print;
    for(int i=m-1;i>=0;i--){
        if(i%2==0){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";

        }
    }
    else{
        for(int j=n-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
    }
    }
}
