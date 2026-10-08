# Make The String Great

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s` of lower and upper case English letters.

A good string is a string which doesn't have  **two adjacent characters**  `s[i]` and `s[i + 1]` where:

- 0 <= i <= s.length - 2
- s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.

To make the string good, you can choose  **two adjacent**  characters that make the string bad and remove them. You can keep doing this until the string becomes good.

Return  *the string*  after making it good. The answer is guaranteed to be unique under the given constraints.

 **Notice**  that an empty string is also good.

 

 **Example 1:** 

```
Input: s = "leEeetcode"
Output: "leetcode"
Explanation: In the first step, either you choose i = 1 or i = 2, both will result "leEeetcode" to be reduced to "leetcode".

```

 **Example 2:** 

```
Input: s = "abBAcC"
Output: ""
Explanation: We have many possible scenarios, and all lead to the same answer. For example:
"abBAcC" --> "aAcC" --> "cC" --> ""
"abBAcC" --> "abBA" --> "aA" --> ""

```

 **Example 3:** 

```
Input: s = "s"
Output: "s"

```

 

 **Constraints:** 

- 1 <= s.length <= 100
- s contains only lower and upper case English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.9 MB (beats 24.36%)  
**Submitted:** 2026-10-08T08:10:12.017Z  

```cpp
class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(char c:s){
            if(!st.empty() && st.top() !=c && tolower(st.top())==tolower(c)){
                st.pop();
            }
            else
               st.push(c);
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/make-the-string-great/)