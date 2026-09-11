class Solution {
public:
    void dfs(int x, int y,vector<vector<char>>& grid){
        int n=grid.size(),m=grid[0].size();
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        for(int i=0;i<4;i++){
            if(x+dx[i]<0||x+dx[i]>=n||y+dy[i]<0||y+dy[i]>=m)continue;
            if(grid[x+dx[i]][y+dy[i]]=='1'){
                grid[x+dx[i]][y+dy[i]]='0';
                dfs(x+dx[i],y+dy[i],grid);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(), m= grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    cnt++;
                    dfs(i,j,grid);
                }
            }
        }
        return cnt;

    }
};
