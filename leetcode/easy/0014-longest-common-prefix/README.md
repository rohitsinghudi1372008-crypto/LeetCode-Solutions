# Longest Common Prefix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

 

 **Example 1:** 

```
Input: strs = ["flower","flow","flight"]
Output: "fl"

```

 **Example 2:** 

```
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

```

 

 **Constraints:** 

- 1 <= strs.length <= 200
- 0 <= strs[i].length <= 200
- strs[i] consists of only lowercase English letters if it is non-empty.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12 MB (beats 39.16%)  
**Submitted:** 2026-08-26T15:37:36.704Z  

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix =strs[0];
        for(int i=0; i<strs.size();i++){
            int j=0;
            while(j < prefix.size() &&
                   j < strs[i].size() &&
                   prefix[j] == strs[i][j]) {
                j++;
            }
              prefix = prefix.substr(0, j);

            if (prefix.empty())
                return "";
        }
        return prefix;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-common-prefix/)