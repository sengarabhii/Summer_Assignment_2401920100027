class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        if(m*n!=r*c) return mat;
        vector<int> arr;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                arr.push_back(mat[i][j]);
            }
        }
        int ind = 0;
        vector<vector<int>> ans;
        for(int i = 0 ; i < r ; i++){
            vector<int> temp;
            for(int j = 0 ; j < c ; j++){
                temp.push_back(arr[ind++]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
