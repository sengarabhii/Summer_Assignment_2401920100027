class Solution {
private:
    bool comparearray(int arr1[],int arr2[]){
        for(int i = 0 ; i < 26 ; i++){
            if(arr1[i]!=arr2[i]){
                return 0;
            }
        }
        return 1;

    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1[26] = {0};
        for(int i = 0 ; i < s1.length() ; i++){
            int index = s1[i] - 'a' ;
            count1[index]++;
        }
        int count2[26] = {0};
        if(s1.length() > s2.length()){
            return 0;
        }
        for(int i = 0 ; i < s2.length()-s1.length()+1 ; i++){
            for(int j = 0 ; j < s1.length() ; j++){
                int index = s2[i+j] - 'a' ;
                count2[index]++;
            }
            if(comparearray(count1,count2)){
                return 1;
            }
            else{
                for(int i = 0 ; i < 26 ; i++){
                    count2[i] = 0;
                }
            }
        }
        return 0;

    }
};
