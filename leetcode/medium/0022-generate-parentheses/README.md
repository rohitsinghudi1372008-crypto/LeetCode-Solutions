# Generate Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given `n` pairs of parentheses, write a function to  *generate all combinations of well-formed parentheses*.

 

 **Example 1:** 

```
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

```

 **Example 2:** 

```
Input: n = 1
Output: ["()"]

```

 

 **Constraints:** 

- 1 <= n <= 8

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.8 MB (beats 33.80%)  
**Submitted:** 2026-10-09T08:10:57.166Z  

```cpp
class Solution {
public:
    void backtrack(vector<string>& ans, string current, int open, int close, int n) {
        if(open==n && close==n){ 
        ans.push_back(current);
        return;
        }
        if (open < n) {
         backtrack(ans, current + "(", open + 1, close, n);
        }
         if (close < open) {
          backtrack(ans, current + ")", open, close + 1, n);
}
}
 vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(ans, "", 0, 0, n);
        return ans;
           
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)