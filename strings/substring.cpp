#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="abcdef";
    cout<<s.substr(2)<<endl;//us index se age ka string print hojaegi;
    cout<<s.substr(1,3);//(idx se.len tak ke element);
}