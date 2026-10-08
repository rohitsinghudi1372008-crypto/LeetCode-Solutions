class Solution {
public:
    int helper(vector<int>& nums, int index, int currentXOR) {
        if (index == nums.size()) {
            return currentXOR;
        }
        int notPick = helper(nums, index + 1, currentXOR);
        int pick = helper(nums, index + 1, currentXOR ^ nums[index]);

        return pick + notPick;
    }
    int subsetXORSum(vector<int>& nums) {
        return helper(nums, 0, 0);
    }
};