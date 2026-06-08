class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> az(26,0);
        for(int i = 0 ; i < s.size() ; i++){
            int ch = s[i] - 'a';
            az[ch]++;
        }
        for(int i = 0 ; i < s.size() ; i++){
            int ch = s[i] - 'a';
            if(az[ch]==1){
                return i;
            }
        }
        return -1;
        
    }
};
