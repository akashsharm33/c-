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
    int p;
    cout<<"enter row of matrix 2";
    cin>>p;
    int q;
    cout<<"enter column of matrix 2";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"enter elements of 1st matrix";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"enter 2nd matrix elemenst";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<q;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }

        }
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j];
    }
    cout<<endl;
        }
    }
    else{
        cout<<"not possible";
    }



}