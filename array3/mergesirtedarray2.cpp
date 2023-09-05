#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>&arr1,vector<int>&arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>res(m+n);
    int i=n-1;
    int j=m-1;
    int k=(m+n)-1;
    while(i>=0&&j>=0){//out of bound na ho jaye;
    if(arr1[i]>arr2[j]){
        res[k]=arr1[i]; 
        i--;
        k--;   }
        else{ //arr2[j]<arr1[i]
        res[k]=arr2[j];
        j--;
        k--;
        }
    }
        if(i<0){//arr1 ke sare elements utha chuke hai
        while(j>=0){
            res[k]=arr2[j];
            k--;
            j--;
        }
        }
        if(j<0){
            while(i>=0){
                res[k]=arr1[i];
                i--;
                k--;
            }
        }
        return res;
    }
int main(){
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for(int i=0;i<=arr1.size()-1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    vector<int>arr2;
    arr2.push_back(2);
     arr2.push_back(3);
     arr2.push_back(6);
      arr2.push_back(7);
     arr2.push_back(10);
      arr2.push_back(12);
      for(int i=0;i<=arr2.size()-1;i++){
        cout<<arr2[i]<<" ";
      }
      cout<<endl;
      vector<int>v=merge(arr1,arr2);
      for(int i=0;i<=v.size()-1;i++){
        cout<<v[i]<<" ";
      }
}