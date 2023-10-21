#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str="akash is a good boy";
    stringstream ss(str);
    string temp;//to store string;
    while(ss>>temp)//ss me se input;
    {
        cout<<temp<<endl;
    }
}