#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no of rows\columns";
    cin>>m;
    
    int arr[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){ //rows
        for(int j=0;j<m;j++){ //columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // transpose in same matrix;
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    for(int i=0;i<m;i++){ //rows
        for(int j=0;j<m;j++){ //columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}