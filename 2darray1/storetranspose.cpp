#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows";
    cin>>m;
    int n;
    cout<<"enter no of rows";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){ //rows
        for(int j=0;j<n;j++){ //columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //store transpose;
    int t[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}