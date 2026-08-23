# Valid Anagram

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  s = "anagram", t = "nagaram"

 **Output:**  true

 **Example 2:** 

 **Input:**  s = "rat", t = "car"

 **Output:**  false

 

 **Constraints:** 

- 1 <= s.length, t.length <= 5 * 104
- s and t consist of lowercase English letters.

 

 **Follow up:**  What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 45.11%)  
**Memory:** 9.9 MB (beats 11.55%)  
**Submitted:** 2026-08-23T15:51:55.914Z  

```cpp
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>count;
         if(s.length() != t.length()){
            return false;
        }
        for(int i = 0; i < (int)s.size(); i++){
        count[s[i]]++;
        count[t[i]]--;
        }
        for(auto pair:count){
            if(pair.second != 0){ 
            return false;
            }
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-anagram/)