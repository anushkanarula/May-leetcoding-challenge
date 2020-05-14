class Solution {
public:
         string removeKdigits(string num, int k) {
        stack<char> ans;
        for (char i : num) {
            while (k and !ans.empty() and i < ans.top()) {
                ans.pop();
                k--;
            }
			
            if (!ans.empty() or i != '0') ans.push(i);
        }
		
        while (k-- and !ans.empty()) ans.pop();        
		if (ans.empty()) return "0";
        const int n = ans.size();
        while(!ans.empty()) {
            num[ans.size()-1] = ans.top();
            ans.pop();
        }
        return num.substr(0, n);
    }
};
