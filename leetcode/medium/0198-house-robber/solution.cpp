// class Solution {
// public:
//     vector<int> dp;

//     int robmaxmoney(int i, vector<int>& nums) {
//         if (i < 0) return 0;
//         if (i == 0) return nums[0];

//         if (dp[i] != -1) return dp[i];

//         int robcurrentindex = nums[i] + robmaxmoney(i - 2, nums);
//         int skipcurrentindex = robmaxmoney(i - 1, nums);

//         return dp[i] = max(robcurrentindex, skipcurrentindex);
//     }

//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         dp.assign(n, -1);

//         return robmaxmoney(n - 1, nums);
//     }
// };


 class Solution {
public:
int rob(vector<int>&nums){
 int s2=0;
 int s1=0;
 for(int num:nums){
    int current=max(s1,s2+num);
    s2=s1;
    s1=current;
 }
 return s1;
 }
 };