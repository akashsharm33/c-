//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
  //  vector<int>v(5);//size is given
    //for(int i=0;i<5;i++){
      //  cin>>v[i];
    //}
    //for(int i=0;i<5;i++){
      //  cout<<v[i]<<endl;
    //}
//}
// when size is not given
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;//size is given
    for(int i=0;i<5;i++){
    int x;
    cin>>x;
    v.push_back(x);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}
