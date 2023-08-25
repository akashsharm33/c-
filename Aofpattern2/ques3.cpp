#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter lines";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<char(64+j);
        }
        for(int q=2;q<=i;q++){
            cout<<char(64+q);
        }
        cout<<endl;
    }

}