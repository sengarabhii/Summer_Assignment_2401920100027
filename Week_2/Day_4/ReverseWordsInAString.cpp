class Solution {
public:
    string reverseWords(string s) {
        int beg = 0;
        int n = s.length()-1;
        for(int end = 0 ; end <= n ; end++){
            if(s[end] == ' ' || end == n){
                int i = beg;
                int j = (end == n)? end : end-1;
                while(i < j){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                beg = end+1;
            }
        }
        return s;
    }
};
