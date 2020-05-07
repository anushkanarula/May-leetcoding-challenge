class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return(nums.at(nums.size()/2));
        
    }
};
