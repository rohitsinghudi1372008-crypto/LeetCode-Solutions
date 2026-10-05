# Permutations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 **Example 2:** 

```
Input: nums = [0,1]
Output: [[0,1],[1,0]]

```

 **Example 3:** 

```
Input: nums = [1]
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.6 MB (beats 70.42%)  
**Submitted:** 2026-10-05T12:45:06.266Z  

```cpp
class Solution {
private:
    // Yeh hamara recursive helper function hai jisme index aur ans pass honge
    void solve(int index, vector<int>& nums, vector<vector<int>>& ans) {
        // 1. Base Case
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }

        // 2. Choices Loop (Function ke andar!)
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);       // DO
            solve(index + 1, nums, ans);      // RECURSE
            swap(nums[index], nums[i]);       // UNDO (Backtrack)
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans; // Answer store karne ke liye
        solve(0, nums, ans);     // 0th index se shuru karo
        return ans;              // Final answer return karo
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations/)