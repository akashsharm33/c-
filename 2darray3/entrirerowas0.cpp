#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter rows and columns;";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){

            for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                  arr[0][j]=arr[i][0]=0;
     
                }


    
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}
}