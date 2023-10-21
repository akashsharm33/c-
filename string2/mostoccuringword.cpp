#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str="akash is a good boy.he is a competetive programmer as well as";
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    
    cout<<endl;
    sort(v.begin(),v.end());
    int maxcount=1;
    int count=1;
    
}