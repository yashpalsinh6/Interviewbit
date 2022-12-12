vector<int> Solution::solve(vector<int> &A) {
    int i=0,cnt0=0;
    for(auto x:A){
        if(x==0){
            cnt0++;
        }
        else {
            A[i++]=x;
        }
    }
    while(cnt0--){
        A[i++]=0;
    }
    return A;
}

