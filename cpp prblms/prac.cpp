#include<bits/stdc++.h>

using namespace std;

int main() {

}


class Solution {

     private:
     bool isSafe(vector<vector<char>> &grid, int r, int c,
          vector<vector<bool>> &visited){
               int row=grid.size();
               int col=grid[0].size();

               return (r>=0 && r<row && c>=0 && c<col && grid[r][c]=='1' && !visited[r][c]);
          }
     void dfs(vector<vector<char>>&grid,int r,int c,vector<vector<bool>> &visited){
          vector<int> rNbr = {-1, -1, -1, 0, 0, 1, 1, 1};
          vector<int> cNbr = {-1, 0, 1, -1, 1, -1, 0, 1};

          visited[r][c]=true;

          for(int k=0;k<8;++k){
               int newR=r+rNbr[k];
               int newC=r+cNbr[k];

               if(isSafe(grid,newR,newC,visited)){
                    dfs(grid,newR,newC,visited);
               }
          }
     }
     public:
       int numIslands(vector<vector<char>>&grid){
               int row=grid.size();
               int col=grid[0].size();

               vector<vector<bool>> visited(row,vector<bool>(col,false));

               int count=0;
               for(int r=0;r<row;++r){
                    for(int c=0;c<col;++c){
                         if(grid[r][c]=='1' && !visited[r][c]){
                              dfs(grid,r,c,visited);
                              ++count;
                         }
                    }
               }
               return count;
          }
   };
   












   class Solution {
     public:
       bool isSafe(int r,int c,vector<vector<char>>& grid,vector<vector<bool>> &visited){
               int row=grid.size();
               int col=grid[0].size();

               return (r>=0 && r<row && c>=0 && c<col && grid[r][c]=='1' && !visited[r][c]);
       }
       void dfs(vector<vector<char>>& grid,vector<vector<bool>> &visited,int r,int c){
          int nRno[8]={0,-1,-1,-1,0,1,1,1};
          int nCno[8]={-1,-1,0,1,1,1,0,-1};
          visited[r][c]=true;
          for(int i=0;i<8;++i){
               int newR=r+nRno[i];
               int newC=c+nCno[i];
               if(isSafe(newR,newC,grid,visited)){
                    dfs(grid,visited,newR,newC);
               }
          }

       }
       int numIslands(vector<vector<char>>& grid) {
               int r=grid.size();
               int c=grid[0].size();
               int count=0;

               vector<vector<bool>> visited(r,vector<bool>(c,false));
               for(int i=0;i<r;++i){
                    for(int j=0;j<c;++j){
                         if(grid[i][j]=='1' && !visited[i][j]){
                              dfs(grid,visited,i,j);
                              count++;
                         }
                    }
               }
               return count;
       }
   };
   
   