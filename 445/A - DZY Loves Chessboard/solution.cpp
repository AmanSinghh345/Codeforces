#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>>& adj, vector<vector<char>>& ans, vector<vector<int>>& vis, char color, int row, int col) {
    vis[row][col] = 1;
    ans[row][col] = color;
    
    int n = adj.size();
    int m = adj[0].size();
    int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};
    
    char newColor = (color == 'B') ? 'W' : 'B';
    
    for (int i = 0; i < 4; i++) {
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];
        
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol]) {
            dfs(adj, ans, vis, newColor, nrow, ncol);
        }
    }
}
 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> mat(n,vector<char> (m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    vector<vector<int>> vis(n,vector<int> (m,0));
    vector<vector<char>> ans(n,vector<char> (m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]=='-')
            {
                ans[i][j]='-';
                vis[i][j]=1;
            }
        }
    }
    char color='B';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j])
            {
                
                dfs(mat,ans,vis,color,i,j);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
 
}