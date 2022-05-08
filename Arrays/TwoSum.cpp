class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> check;
        for(int i=0;i<nums.size();i++) {
            int temp = target - nums[i];
            if(check.find(temp) != check.end())
                return {check[temp], i};
            check[nums[i]] = i;
        }
        return {-1, -1};
    }
};