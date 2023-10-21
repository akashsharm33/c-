#include<iostream>
#include<climits>
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
    int minr=0;
    int minc=0;
    int maxr=m-1;
    int maxc=n-1;
    //right
    while(maxr>=minr&&maxc>=minc){
        //right
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(maxr<minr||maxc<minc)break;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        //left
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j];
        }
        maxr--;
        //up;
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc];

        }
        minc++;
    }
}