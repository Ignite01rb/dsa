class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return Rec(0,0,m,n,dp);
    }
    
    int Rec(int x, int y, int m, int n, vector<vector<int>>& dp) {
        if (x==m-1 && y==n - 1) {
            return 1;
        }
        if (dp[x][y] != -1) {
            return dp[x][y];
        }
        int rightPaths = 0;
        int downPaths = 0;
        if (x < m - 1) {
            rightPaths=Rec(x + 1, y, m, n, dp);
        }
        if (y < n - 1) {
            downPaths=Rec(x, y + 1, m, n, dp);
        }
        dp[x][y] = rightPaths + downPaths;
        return dp[x][y];
    }
};