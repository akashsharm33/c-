#include<iostream>
using namespace std;
void hanaoi(int n,char a,char b,char c){
    if(n==0)return;
    hanaoi(n-1,a,c,b);//c as helper //a source // b as a destination;
    cout<<a<<" "<<c<<endl;
    hanaoi(n-1,b,a,c);
}
int main(){
    int n=3;//size of disk;
    hanaoi(n,'A','B','C');
}