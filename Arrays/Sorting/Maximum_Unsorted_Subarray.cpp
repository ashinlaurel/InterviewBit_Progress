// https://www.youtube.com/watch?v=ByDFzXoldl0

vector<int> Solution::subUnsort(vector<int> &A) {
    int  n= A.size();
    int i=0;
    int j=n-1;
    
    while(i<n-1 && A[i]<=A[i+1]){
        i++;
    }
    
    while(j>=1 && A[j]>=A[j-1]){
        j--;
    }
    // cout<<i<<" "<<j<<endl;
    vector<int> ans;
    if(i==n-1) {
        ans.push_back(-1);
        return ans;
    }
    
    int tmin =INT_MAX;
    int tmax =INT_MIN;
    
    for(int k=i;k<=j;k++){
        tmin=min(tmin,A[k]);
        tmax=max(tmax,A[k]);
    }
    
    int left=0;
    int right=n-1;
    
    while(left<i){
        if(tmin<A[left]) break;
        left++;
    }
    
    while(right>j){
        if(tmax>A[right])break;
        right--;
    }
    
    ans.push_back(left);
    ans.push_back(right);
    
    return ans;
    

}
