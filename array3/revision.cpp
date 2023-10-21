int n=height.size();
int prev[n];
prev[0]=-1;
int max=height[0];
for(int i=1;i<n;i++){
    prev[i]=max;
    if(max<height[i])max=height[i];
}
int next[n];
next[n-1]=-1;
max=height[n-1];
for(int i=n-1;i>=0;i--){
    next[i]=max;
    if(max<height[i])max=height[i];
}
int mini[n];
for(int i=0;i<n;i++){
    mini[n]=min(prev[i],next[i]);
}
int water=0;
for(int i=1;i<n-1;i++){
    if(mini[i]>height[i])
    water+=mini[i]-height[i];
}
return water;
}
