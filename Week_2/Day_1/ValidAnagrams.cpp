class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arr1(52,0);
        if(s.length()!=t.length()){
            return 0;
        }
        for(int i = 0  ; i < s.length() ; i++){
            int n1 = s[i] - 'a' ;
            arr1[n1]+=1;
            int n2 = t[i] - 'a' ;
            arr1[n2+26]+=1;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(arr1[i]!=arr1[26+i]){
                return 0;
            }
        }
        return 1;

        
    }
};
