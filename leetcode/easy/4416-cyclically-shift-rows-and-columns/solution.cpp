class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        vector<vector<int>>
        temp(n,vector<int>(n));
        for(int i=0; i<n; i++){
            int k=rowShift[i]%n;
            for(int j=0;j<n;j++){
                temp[i][j]=grid[i][(j+k)%n];
            }
        }
        vector<vector<int>>
        ans(n,vector<int>(n));
        for(int j=0; j<n;j++){
            int k=colShift[j]%n;
            for(int i=0; i<n; i++){
                ans[i][j]=temp[(i+k)%n][j];
            }
        }
        return ans;
    }
};