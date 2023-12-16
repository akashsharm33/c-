#include<iostream>
#include<vector>
using namespace std;
void printsubset(string ans,string original,vector<string>&v,bool flag){
    if(original==""){//jab khali hogi tabhi toh push karoge broo;
        v.push_back(ans);
      

        return;
    }
    char ch=original[0];//charater nikal loo
    if(original.length()==1){
     if(flag==true)   printsubset(ans+ch,original.substr(1),v,true);
    printsubset(ans,original.substr(1),v,true);
    return;//taaki neeche ki condition na chale ;
    }
    char dh=original[1];
    if(ch==dh){
      if(flag==true)  printsubset(ans+ch,original.substr(1),v,true);
    printsubset(ans,original.substr(1),v,false);

    }
    else{
        if(flag==true)  printsubset(ans+ch,original.substr(1),v,true);
    printsubset(ans,original.substr(1),v,true);

    }

}
int main(){
    string str="aab";
    vector<string>v;
    printsubset("",str,v,true);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}