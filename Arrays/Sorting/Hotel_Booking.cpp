bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<pair<int,int>> vec; //1 for arr , 0 for depart this number ensures that departure comes first in sorting
    int count=0;

    int n= arrive.size();
    for(int i=0;i<n;i++){
        vec.push_back({arrive[i],1});
        vec.push_back({depart[i],0});
    }    

    sort(vec.begin(),vec.end());

    for(int i=0;i<2*n;i++){
        if(vec[i].second==1) count++;
        else count--;

        if(count>K) return 0;
    }
    return 1;
}
