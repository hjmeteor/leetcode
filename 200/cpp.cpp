void dfs(vector<vector<char>>& grid, int i, int j){
    int n = grid.size();
    int m = grid[0].size();
    if(i < 0 || i > n - 1 || j < 0 || j > m - 1 || grid[i][j] == '0'){
        return;
    }
    grid[i][j] = '0';
    dfs(grid, i, j + 1);
    dfs(grid, i, j - 1);
    dfs(grid, i + 1, j);
    dfs(grid, i - 1, j);
}
class Solution {
public:
int numIslands(vector<vector<char>>& grid) {
    if(grid.size() == 0){
        return 0;
    }
    int result = 0;
    int n = grid.size();
    int m = grid[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(grid[i][j] == '1'){
                dfs(grid, i, j);
                result++;
            }
        }
    }
    return result;
}
};