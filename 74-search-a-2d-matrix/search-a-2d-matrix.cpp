class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n= matrix[0].size();
        vector<int> flat;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                flat.push_back(matrix[i][j]);
            }
        }
        if(binary_search(flat.begin(), flat.end(), target)) return true;
        return false;
    }
};