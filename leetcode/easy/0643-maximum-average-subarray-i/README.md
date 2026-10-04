# Maximum Average Subarray I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` consisting of `n` elements, and an integer `k`.

Find a contiguous subarray whose  **length is equal to**  `k` that has the maximum average value and return  *this value*. Any answer with a calculation error less than `10-5` will be accepted.

 

 **Example 1:** 

```
Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

```

 **Example 2:** 

```
Input: nums = [5], k = 1
Output: 5.00000

```

 

 **Constraints:** 

- n == nums.length
- 1 <= k <= n <= 105
- -104 <= nums[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 25.05%)  
**Memory:** 113.8 MB (beats 60.12%)  
**Submitted:** 2026-10-04T04:39:17.220Z  

```cpp
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double current_sum=0;
        for(int i=0;i<k;i++){
            current_sum +=nums[i];
        }
        double max_sum=current_sum;
        for(int i=k; i<nums.size();i++){
            current_sum+=nums[i]-nums[i-k];
            max_sum=max(max_sum,current_sum);
        }
        return max_sum/k;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-average-subarray-i/)