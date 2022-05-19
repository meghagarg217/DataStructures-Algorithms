class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int count = 0;
        int elem = 0;

        for (int num : nums) {
            if (count == 0) {
                elem = num;
            }
            if(num==elem) count += 1; 
            else count -= 1; 
        }

        return elem;
    }
};