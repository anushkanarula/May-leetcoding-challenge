class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>toCompare(26,0);
		vector<int>compareWith(26,0);
		for(char a: s1){
			toCompare[a-'a']++;
		}
		if( s1.size()> s2.size())
			return false;
		int k = 0;
		for(k = 0;k<s1.size();k++){
			compareWith[s2[k]-'a']++;
		}
		if( toCompare == compareWith)
			return true;
		int j = 0;
		for(int i = k;i<s2.size();i++){
			compareWith[s2[i]-'a']++;
			compareWith[s2[j]-'a']--;
			if(toCompare == compareWith)
				return true;
			j++;
		}
		return  false;

        
    }
};
