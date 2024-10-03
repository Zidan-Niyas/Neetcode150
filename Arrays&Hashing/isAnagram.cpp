class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;
        for(int i=0; i<s.size(); i++){
            if(mp1.find(s[i]) != mp2.end()){
                mp1[s[i]]++;
            }
            else{
                mp1[s[i]] = 1;
            }
        }
        for(int i=0; i<t.size(); i++){
            if(mp2.find(t[i]) != mp2.end()) {
                mp2[t[i]]++;
            }
            else {
                mp2[t[i]] = 1;
            }
        }
        if(mp1 == mp2) {
            return true;
        }
        else {
            return false;
        }
    }
};
