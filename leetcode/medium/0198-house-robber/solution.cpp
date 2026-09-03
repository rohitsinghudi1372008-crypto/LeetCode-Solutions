class Solution {
public:
    vector<int> dp;

    int robmaxmoney(int i, vector<int>& nums) {
        if (i < 0) return 0;
        if (i == 0) return nums[0];

        if (dp[i] != -1) return dp[i];

        int robcurrentindex = nums[i] + robmaxmoney(i - 2, nums);
        int skipcurrentindex = robmaxmoney(i - 1, nums);

        return dp[i] = max(robcurrentindex, skipcurrentindex);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        dp.assign(n, -1);

        return robmaxmoney(n - 1, nums);
    }
};