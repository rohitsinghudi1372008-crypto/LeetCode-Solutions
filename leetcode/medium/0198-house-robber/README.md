# House Robber

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and  **it will automatically contact the police if two adjacent houses were broken into on the same night**.

Given an integer array `nums` representing the amount of money of each house, return  *the maximum amount of money you can rob tonight  **without alerting the police***.

 

 **Example 1:** 

```
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.

```

 **Example 2:** 

```
Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.

```

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 0 <= nums[i] <= 400

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.1 MB (beats 79.86%)  
**Submitted:** 2026-09-03T09:00:59.565Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/house-robber/)