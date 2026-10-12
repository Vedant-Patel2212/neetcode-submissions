class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> arr(nums.begin() , nums.end());
        return arr.size() != nums.size();
    }
};