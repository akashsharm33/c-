#include<iostream>
using namespace std;
int area(int r){
    int a=3.14*r*r;
    return a;

}
int main(){
    int r,a;
    cin>>r;
    area(r);
    cout<<a;
}