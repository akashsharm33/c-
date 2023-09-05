#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;//need not mention size;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v[0]=77;
     cout<<v[0];
     cout<<v[1];
     cout<<v[2];
     cout<<v[3];

}