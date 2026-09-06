# Combination Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of  **distinct**  integers `candidates` and a target integer `target`, return  *a list of all  **unique combinations**  of* `candidates` *where the chosen numbers sum to* `target` *.*  You may return the combinations in  **any order**.

The  **same**  number may be chosen from `candidates` an  **unlimited number of times**. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to `target` is less than `150` combinations for the given input.

 

 **Example 1:** 

```
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

```

 **Example 2:** 

```
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

```

 **Example 3:** 

```
Input: candidates = [2], target = 1
Output: []

```

 

 **Constraints:** 

- 1 <= candidates.length <= 30
- 2 <= candidates[i] <= 40
- All elements of candidates are distinct.
- 1 <= target <= 40

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 14.4 MB (beats 32.33%)  
**Submitted:** 2026-09-06T16:08:55.438Z  

```cpp
class Solution {
public:
    vector<vector<int>> ans;

    void solve(int index, vector<int>& candidates, int target, vector<int>& temp) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (target < 0 || index == candidates.size()) {
            return;
        }

        // Take current candidate
        temp.push_back(candidates[index]);
        solve(index, candidates, target - candidates[index], temp);
        temp.pop_back();

        // Skip current candidate
        solve(index + 1, candidates, target, temp);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        solve(0, candidates, target, temp);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/combination-sum/)