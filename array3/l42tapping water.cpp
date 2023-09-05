
    int trap(vector<int>& height) {
        //previous greatest element;
        int n=height.size();
        int prev[n];
        prev[0]=-1;
        int max=height[0];
        for(int i=1;i<n;i++){
            prev[i]=max;
            if(max<height[i])max=height[i];
        }
        //next greatest element;
        int next[n];
        next[n-1]=-1;
        max=height[n-1];
        for(int i=n-1;i>=0;i--){
            next[i]=max;
            if(max<height[i])max=height[i];
        }
        //minimum array;
        int mini[n];
        for(int i=0;i<n;i++){
            mini[i]=min(prev[i],next[i]);
        }
        //caculating water;
        int water=0;
        for(int i=1;i<n-1;i++){//last element me panni nhi bharega;
            if(height[i]<mini[i]){
                water+=(mini[i]-height[i]);
            }
        }
        return water;


        
    }
};