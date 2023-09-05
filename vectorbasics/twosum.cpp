#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    cout<<"enter target";
    cin>>x;
    vector<int>v;
    int n;
    cout<<"enter array size";
    cin>>n;
    cout<<"eneter elements";
    for(int i=0;i<n;i++){
        int q; // used ectra variable
        //because array size is not given
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=v.size()-2;i++){ // got till 6 elements
        for(int j=i+1;j<=v.size()-1;j++){ //go till 7
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}
