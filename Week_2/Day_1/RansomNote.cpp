class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> arr1(26,0);
        vector<int> arr2(26,0);
        for(int i = 0 ; i < ransomNote.size() ; i++){
            int ind = ransomNote[i] - 'a';
            arr1[ind]++;
        }
        for(int i = 0 ; i < magazine.size() ; i++){
            int ind = magazine[i] - 'a';
            arr2[ind]++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(arr1[i] > arr2[i]){
                return false;
            }
        }
        
        return true;
    }
};
