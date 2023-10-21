#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s; //ascii value ke order me sorting;
    getline(cin,s); //alphabateical order
    sort(s.begin(),s.end());
    cout<<s;
}