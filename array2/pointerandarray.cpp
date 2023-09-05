#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,6,7,2};
    int*ptr=arr;
    //cout<<ptr<<endl;
   // cout<<ptr[0]; //int *b=int b[];
    for(int i=0;i<=4;i++){
        cout<<ptr[i];
    }
    cout<<endl;
    *ptr=8; //ptr[]=8;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";
    }

}