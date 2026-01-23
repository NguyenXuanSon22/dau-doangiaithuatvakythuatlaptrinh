class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> s;
    
    for (int i = 0; i < nums.size(); i++) {
        int gt = target - nums[i];

        if (s.count(gt)) {
            return {s[gt], i};
        }

        s[nums[i]] = i;
    }
    return {}; 
    }
};