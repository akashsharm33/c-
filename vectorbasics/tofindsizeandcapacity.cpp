#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;//need not mention size;
    v.push_back(6);
   // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1);
//    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(9);
   // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(0);
   // cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
}    