#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n=s.size();
    reverse(s.begin(),s.begin()+n/2);
    cout<<s;
}