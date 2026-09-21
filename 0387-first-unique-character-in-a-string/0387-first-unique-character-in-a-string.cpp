class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        int index = -1;
        for (char c: s){
            freq[c]++;
        }
        for (int i=0; i<s.length(); i++){
            if (freq[s[i]]==1){
                index = i;
                break;
            }
        }
        return index;
    }
};