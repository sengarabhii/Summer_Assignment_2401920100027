class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result;
        char ch;
        for(int i = 0 ; i < strs[0].length() ; i++){
            ch = strs[0][i];
            for(int j = 0 ; j < strs.size() ; j++){
                if(i>=strs[j].length() || strs[j][i]!=ch){
                    return result;
                }                
            }
            result.push_back(ch);
        }
        return result;
    }
};
