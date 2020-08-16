class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int wd[26] = {};
        for (int i = 0; i < s.size(); i++) 
            wd[s[i] - 'a']++;
        for (int i = 0; i < t.size(); i++) 
            if (--wd[t[i] - 'a'] < 0) return false;
        return true;
    }
};

