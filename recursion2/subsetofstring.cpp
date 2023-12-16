#include<iostream>
#include<vector>
using namespace std;
void printsubset(string ans,string original){
    if(original.length()==0){
        cout<<ans<<endl;
      

        return;
    }
    char ch=original[0];//charater nikal loo
    printsubset(ans+ch,original.substr(1));
    printsubset(ans,original.substr(1));

}
int main(){
    string str="abc";
    printsubset("",str);
    for(string  :ele){
        cout<<ele<<endl;
    }
}