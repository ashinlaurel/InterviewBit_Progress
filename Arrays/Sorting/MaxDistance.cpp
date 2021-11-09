int Solution::maximumGap(const vector<int> &A) {
    vector<pair<int,int>> vec;
    int n= A.size();
    for(int i=0;i<n;i++){
        vec.push_back({A[i],i});
    }
    sort(vec.begin(),vec.end());
    // suffix for whats the max index in the right
    int maxInd= INT_MIN;
    vector<int> suff(n,0);
    for(int i=n-1;i>=0;i--){
        maxInd = max(vec[i].second,maxInd);
        suff[i]= maxInd;
    }

// calculating the answer
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        ans= max(ans,(suff[i]-vec[i].second));
    }
    return ans;

}
