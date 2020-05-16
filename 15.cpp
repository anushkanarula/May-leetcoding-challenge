class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int c=A[0],m=A[0], ci=A[0], mi=A[0], s=A[0];
        for(int i=1;i<A.size();i++){
            c=max(A[i],c+A[i]);
            m=max(m,c);
            ci=min(A[i],ci+A[i]);
            mi=min(ci,mi);
            s+=A[i];
        }
        if(m<0 && s<0)return m;
        return max(m,s-mi);
    }
};
