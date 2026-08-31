# Binary Search

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers `nums` which is sorted in ascending order, and an integer `target`, write a function to search `target` in `nums`. If `target` exists, then return its index. Otherwise, return `-1`.

You must write an algorithm with `O(log n)` runtime complexity.

 

 **Example 1:** 

```
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

```

 **Example 2:** 

```
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -104 < nums[i], target < 104
- All the integers in nums are unique.
- nums is sorted in ascending order.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 31.5 MB (beats 7.26%)  
**Submitted:** 2026-08-31T17:47:10.613Z  

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int begin=0; int end=nums.size()-1;
        while(begin<=end){
            int mid=(begin+end)/2;
             if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                begin = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return -1;
        }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-search/)