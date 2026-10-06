# Permutations II

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a collection of numbers, `nums`, that might contain duplicates, return  *all possible unique permutations  **in any order**.* 

 

 **Example 1:** 

```
Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]

```

 **Example 2:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 8
- -10 <= nums[i] <= 10

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 42.63%)  
**Memory:** 12 MB (beats 49.23%)  
**Submitted:** 2026-10-06T16:14:22.021Z  

```cpp
class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(vector<int>& nums, vector<int>& temp, vector<bool>& used) {
        if (temp.size() == nums.size()) {
            ans.push_back(temp);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (used[i])
                continue;

            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
                continue;

            used[i] = true;
            temp.push_back(nums[i]);

            solve(nums, temp, used);

            temp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> temp;
        vector<bool> used(nums.size(), false);

        solve(nums, temp, used);

        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations-ii/)