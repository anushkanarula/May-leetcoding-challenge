class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_set<char>s;
        int count=0;
        for(int i=0;i<J.size();i++)
        {
            s.insert(J[i]);
        }
        for(int i=0;i<S.size();i++)
        {
           if(s.find(S[i])!=s.end())
                count++;
        }
        return count;
        
    }
};
