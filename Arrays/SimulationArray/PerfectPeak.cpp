int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    vector<int> leftMax(n,0);
    vector<int> rightMin(n,0);

    int lmax=INT_MIN;
    int rmin= INT_MAX;

    for(int i=0;i<n;i++){
        if(i==0){
            leftMax[i]=INT_MAX;
        }else{
             lmax = max(lmax,A[i-1]);
             leftMax[i]= lmax;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            rightMin[i]=INT_MIN;
        }else{
             rmin = min(rmin,A[i+1]);
             rightMin[i]= rmin;
        }
    }

    // for(int val: leftMax){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // for(int val: rightMin){
    //     cout<<val<<" ";
    // }


    for(int i=0;i<n;i++){
        if(A[i]>leftMax[i]&& A[i]<rightMin[i]) {
            // cout<<A[i]<<endl;
            return 1;}
    }

    return 0;
    

}
