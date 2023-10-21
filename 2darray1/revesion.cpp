#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows and columns";
    cin>>n>>m;
    int arr[n][m];
cout<<"enter element of array 1";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            
        }

    }
    int brr[n][m];
    cout<<"enter the elemet of array 2";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
            
        }

    }
    cout<<"here is your result";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j]+=arr[i][j];
            
        }

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<brr[i][j];
            
        }
        cout<<endl;

    }
}
    
