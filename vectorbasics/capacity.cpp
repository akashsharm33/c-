#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;//need not mention size;
    v.push_back(6); //1 1
    v.push_back(1);// 2 2
    v.push_back(9); //3 4
    v.push_back(10); //4 4
    v.push_back(6); //5 8
    v.push_back(1); //6 //8
    v.push_back(9); //7 8
    v.push_back(10); //8 8
    v.push_back(6); //9 16
    v.push_back(1);//10 16
    v.push_back(9);//11 16;
    cout<<"size is"<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<"size is"<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
}