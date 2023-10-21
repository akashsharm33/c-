#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v(3,vector<int>(4,20));//3 row 4 column me 20 hai;
//<int>(4,2) all value 2 as 2d array;
//cout<<v.size()<<endl; //it will print rows;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
cout<<v.size()<<endl;// row
cout<<v[1].size();//column
}