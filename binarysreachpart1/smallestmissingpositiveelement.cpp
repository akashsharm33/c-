#include<iostream>
using namespace std;
int arr[]={0,1,2,4,5,6,9,12};
int n=8;

int lo=0;
int hi=n-1;
int ans=-1;
while(lo<=hi)
{
    int mid=lo+(hi-lo)/2;
    if(arr[mid]==mid) lo=mid+1;//jaruri nhi hai ye he missin hoo;
    else{
        ans=mid;
        hi=mid-1;
    }
}
cout<<ans;
}
