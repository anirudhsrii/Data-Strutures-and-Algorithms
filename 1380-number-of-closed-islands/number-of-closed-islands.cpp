/*class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for(int i = 1 ; i < n-1 ; i++){
            for(int j = 1 ; j < m-1 ; j++){
                if(grid[i-1][j] == 1 && 
                grid[i+1][j]==1 && 
                grid[i][j-1] ==1 && 
                grid[i][j+1] == 1) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};*/

//dfs we can use because we want to check that if there is any large land which is being surrounded by water
class Solution{
public:
    int n , m ;
    bool dfs(vector<vector<int>> & grid , int r, int c){
        if( r < 0 || r >= n || c < 0 || c >= m ) return false; // yeh caase hua index out of bound
        if(grid[r][c] == 1){ // water case // pani ka case
            return true;
        }
        grid[r][c] = 1; // mark visited so that we do not trap in loop at every index

        bool left = dfs(grid , r , c-1);
        bool right = dfs(grid , r , c+1);
        bool up = dfs(grid , r-1 , c);
        bool down = dfs(grid , r+1 , c);

        return left && right && up && down;
    }
    int closedIsland(vector<vector<int>> &grid){
        n = grid.size();
        m = grid[0].size();
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(grid[i][j] == 0){ // yani ki woh land hai
                    if(dfs(grid , i , j) == true){ // ek function check krne ke liye ki paani kahan kahan hai
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};