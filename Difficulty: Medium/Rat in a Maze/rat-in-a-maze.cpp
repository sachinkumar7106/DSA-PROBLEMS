class Solution {
  public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    string dir="UDLR";
    bool valid(int i,int j,int n){
        return i>=0&&j>=0&&i<n&&j<n;
    }
    
    void totalways(vector<vector<int>>&maze,int i,int j,int n,string &path,vector<string>&ans,vector<vector<bool>>&visited){
        //reached goal
        if(i==n-1&&j==n-1){
            ans.push_back(path);
            return;
        }
        //visited path
        visited[i][j]=1;
        
        //going in valid directions
        for(int k=0;k<4;k++){
            if(valid(i+row[k],j+col[k],n)&&maze[i+row[k]][j+col[k]]&&!visited[i+row[k]][j+col[k]]){
                path.push_back(dir[k]);
                totalways(maze,i+row[k],j+col[k],n,path,ans,visited);
                path.pop_back();
            }
        }
        visited[i][j]=0;
    }
    
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        
        vector<vector<bool>> visited(maze.size(),vector<bool>(maze.size(),0));
        string path;
        vector<string> ans;
        
        if(maze[0][0]==0||maze[maze.size()-1][maze.size()-1]==0){
            return ans;
        }
        
        totalways(maze,0,0,maze.size(),path,ans,visited);
        sort(ans.begin(),ans.end());
        return ans;
    }
};