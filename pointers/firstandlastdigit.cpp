#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int firstdigit,lastdigit;
    int*ptr1=&firstdigit;
    int*ptr2=&lastdigit;
    find(n,ptr1,ptr2);
}