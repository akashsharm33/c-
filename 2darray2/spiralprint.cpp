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
    int minr=0,minc=0;
    int maxr=m-1,maxc=n-1;
    while(minr<=maxr&&minc<=maxc){
        //right;
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr||minc>maxc)break;//taki dubara print na hoo extra element;
        //down;
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        //left;
        for(int j=maxc;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
        //top;
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}