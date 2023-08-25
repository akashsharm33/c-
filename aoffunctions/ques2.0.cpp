#include<iostream>
using namespace std;
int area(int r){
    int a;
    a=3.14*r*r;
    return a;
    

}
int main(){
    int r;
    cout<<"enter r";
    cin>>r;
    int a=area(r);
    cout<<a;
    
}