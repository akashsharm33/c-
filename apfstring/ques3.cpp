#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool ispalindrome(string s){
    int i=0;
    int j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j])return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(ispalindrome(s)==true)
    cout<<"it is palindrome";
    else
    cout<<"it is not  a palindrome";

   
}