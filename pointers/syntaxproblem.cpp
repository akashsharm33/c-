#include<iostream>
using namespace std;
int main(){
    int x=12,y=10;
    int*p1=&x,*p2=&y;//we cannot write it in this way  *p1=&x,p2=y;
    cout<<*p1<<endl;
    cout<<*p2<<endl;
}