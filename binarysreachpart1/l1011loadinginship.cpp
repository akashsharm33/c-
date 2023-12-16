class Solution {
public:
bool check(vector<int>& weights, int days){
    int n=weights.size();
int m=mid;//capacity;
    int count=1;//days 
    for(int i=0;i<n;i++){
        if(m>=weight[i]){
            m-=weight[i];//current capacity of ship jo badalegi he jab weight dalenge hamm;
        }
        else{
            count++;//one day completed
            m=mid;//reload ship
            m-=weight[i];//again same process
        }
    }
    if(count>days)return false;// jyada din lagne chaheye; 
    else return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            if(max<weights[i])max=weights[i];
            sum+=weights[i];
        }
        int lo=max;
        int hi=sum;
        int minCapacity=sum;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,weights,days)){
                minCapacity=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        
    }
};