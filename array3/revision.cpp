int trap(vector<int>& height) {
    int n=height.size();
    int prev[n];
    prev[0]=-1;
    int max=height[0];
    for(int i=1;i<n;i++){
        max=prev[i];
        if(max<height[i])max=height[i];

    }
    int next[n];
    next[n-1]=-1;
    int max=height[n-1];
    for(int i=n-1;i>=0;i--){
        max=next[i];
        if(max<height[i])max=height[i];
    }
    int mini[n];
    for(int i=1;i<n;i++){
        mini(i)=min(prev[i],next[i]);
    }
    int water=0;
    for(int i=1;i<n-1;i++){
        if(height[i]<mini[i]){
            water+=(mini[i]-height[i]);
        }
    }
    return water;
}

