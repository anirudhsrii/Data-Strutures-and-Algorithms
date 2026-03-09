class Solution {
public:
    void dfs(int node,vector<vector<int>>&adjLs, vector<int> &visited){
        visited[node] = 1;
        for(auto it: adjLs[node]){
            if(!visited[it]){
                dfs(it,adjLs,visited);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<vector<int>>adjLs(V);
        for(int i = 0 ; i < V ; i++){
            for(int j = 0 ; j < V ; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adjLs[i].push_back(j);
                    // adjLs[j].push_back(i);
                }
            }
        }
        vector<int> visited(V,0);
        int cnt = 0;
        for(int i = 0 ; i <V ; i++){
            if(!visited[i]){
                cnt++;
                dfs(i,adjLs,visited);
            }
        }
        return cnt;
    }
};