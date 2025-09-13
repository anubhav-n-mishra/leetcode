class Solution {
public:
    int dfs(vector<vector<int>>& matrix, vector<vector<int>>& memo, int i, int j, int m, int n) {
        if (memo[i][j] != -1) {
            return memo[i][j];
        }
        
        int maxPath = 1;
        int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        for (int k = 0; k < 4; k++) {
            int ni = i + directions[k][0];
            int nj = j + directions[k][1];
            
            if (ni >= 0 && ni < m && nj >= 0 && nj < n && matrix[ni][nj] > matrix[i][j]) {
                maxPath = max(maxPath, 1 + dfs(matrix, memo, ni, nj, m, n));
            }
        }
        
        memo[i][j] = maxPath;
        return maxPath;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<vector<int>> memo(m, vector<int>(n, -1));
        int result = 0;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result = max(result, dfs(matrix, memo, i, j, m, n));
            }
        }
        
        return result;
    }
};