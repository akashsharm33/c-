#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s="leetcode";
    vector<int>arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch =s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;    //108-97=11 108 value of l to find index;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx)mx=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii=i+97;//asciii value;
            char ch=(char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
}

