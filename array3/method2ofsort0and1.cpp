#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortm2(vector<int>&v){
    //two pointers method
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]==0)i++;
        if(v[j]==1)j--;
        if(i>j)break;
        if(v[i]==1&&v[j]==0){ // -swap if
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //sort(v.begin(),v.end());
    //kaam
    sortm2(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}