#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string arr[]={"0123","0023","456","00182","940","2901"};
    int max=stoi(arr[0]);//string to integer;
    for(int i=0;i<6;i++){
        int x=stoi(arr[i]);//push taking input;
        if(x>max)max=x;
    }
    cout<<max;
}