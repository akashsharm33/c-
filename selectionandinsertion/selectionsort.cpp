#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=5;
    for(int ele:arr){// for each loop
        cout<<ele<<" ";
    }
    cout<<endl;
    //insetion sort;
    for(int i=0;i<n-1;i++){//last count nhi ho rha hai;
    int min=INT_MAX;
    int mindx=-1;
    //minimum element calculation 
    for(int j=i;j<n;j++){//logic
        if(arr[j]<min){
            min=arr[j];
            mindx=j;//to find index only;
        }

    }
    swap(arr[i],arr[mindx]);

}
for(int ele:arr){// for each loop
        cout<<ele<<" ";
    }
}