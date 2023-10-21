#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
    }
    int index=-1,max=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        if(max<sum){
            max=sum;
            index=i;
        }

    }
    cout<<"row nummber with max elements"<<index+1;
}
