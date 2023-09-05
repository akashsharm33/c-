#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int esum=0;
    for(int i=0;i<n;i++){
        if(i%2==0)
        esum=esum+arr[i];
    
    }
    int osum=0;
    for(int i=0;i<n;i++){
        if(i%2!=0)
        osum=osum+arr[i];
    }
    cout<<esum<<endl;
    cout<<osum<<endl;
    cout<<"thers difference is"<<esum-osum;
   // cout<<esum;
 //  cout<<arr[i];
}