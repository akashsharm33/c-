#include<iostream>
using namespace std;
void display(int a[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int size){
    b[0]=12;
    b[1]=234;
    b[4]=1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);
}