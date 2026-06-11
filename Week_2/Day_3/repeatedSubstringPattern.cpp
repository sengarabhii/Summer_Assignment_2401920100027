class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ans = s + s;
        //deleting first and last character
        ans.pop_back();
        ans.erase(0,1);
        if(ans.find(s)!=string::npos) return true;
        return false;
    }
};
