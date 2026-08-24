class Solution {
  public:
    int r,c;
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    
    bool valid(int i,int j){
        return i>=0&&i<r&&j>=0&&j<c;
    }
    void fill(vector<vector<char>>& grid) {
        // Code here
        r=grid.size();
        c=grid[0].size();
        
        //apply bfs from border,where 0 is present
        //replace all boundary attached 0 to T
        queue<pair<int,int>>q;
        
        //first row
        for(int j=0;j<c;j++){
            if(grid[0][j]=='O'){
                q.push({0,j});
                grid[0][j]='T';
            }
        }
        //first col
        for(int j=1;j<r;j++){
            if(grid[j][0]=='O'){
                q.push({j,0});
                grid[j][0]='T';
            }
        }
        
        //last row
        for(int i=1;i<c;i++){
            if(grid[r-1][i]=='O'){
                q.push({r-1,i});
                grid[r-1][i]='T';
            }
        }
        //last col 
        
        for(int i=1;i<r-1;i++){
            if(grid[i][c-1]=='O'){
                q.push({i,c-1});
                grid[i][c-1]='T';
            }
        }
        
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            
            for(int k=0;k<4;k++){
                if(valid(i+row[k],j+col[k])&&grid[i+row[k]][j+col[k]]=='O'){
                    grid[i+row[k]][j+col[k]]='T';
                    q.push({i+row[k],j+col[k]});
                }
            }
        }
        
        //replace all O with X and all T with O
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='O'){
                    grid[i][j]='X';
                }else if(grid[i][j]=='T'){
                    grid[i][j]='O';
                }
            }
        }
    }
};