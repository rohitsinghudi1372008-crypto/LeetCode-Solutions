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