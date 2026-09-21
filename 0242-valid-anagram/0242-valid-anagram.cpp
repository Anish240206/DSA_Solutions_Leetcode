class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()){
            return false;
        }
        unordered_map<char, int> freq;
        for (char c1 : s){
            freq[c1]++;
        }
        for (char c2 : t){
            freq[c2]--;
        }
        for (auto i : freq){
            if (i.second != 0){
                return false;
                break;
            }
        }
        return true;
    }
};