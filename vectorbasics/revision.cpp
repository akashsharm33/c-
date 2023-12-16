#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reverseapart(int i,int j,vector<int>&v){
    
        while(i<=j){
            int t=v[i];
            v[i]=v[j];
            v[j]=t;
            i++;
            j--;
        }
}
int main(){
    vector<int>v;
    v.push_back(1);
     v.push_back(2);
      v.push_back(3);
       v.push_back(4);
        v.push_back(5);
        display(v);
        reverseapart(0,2,v);
        display(v);
        
}