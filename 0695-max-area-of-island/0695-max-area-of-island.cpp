class Solution {
    private:
    int dfs(vector<vector<int>>& grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();

        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0)
            return 0;


        grid[i][j] =0;

        
    return 1
        +dfs(grid, i - 1, j)
        +dfs(grid, i + 1, j)
        +dfs(grid, i, j - 1)
        +dfs(grid, i, j + 1);
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int area=dfs(grid,i,j);
                    maxi=max(maxi,area);
                    dfs(grid,i,j);
                }
            }

        }
         return maxi;
    }
   
    
};