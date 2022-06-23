class Solution {
public:
    void dfs(int i,int j,int initialColour,int newColour,vector<vector<int>>& image)
    {
        int n=image.size();
        int m=image[0].size();
        if(i<0||j<0 )return;
          if(i>=n||j>=m)return ;
        if(image[i][j]!=initialColour)return;
        image[i][j] = newColour;
        
        dfs(i-1,j,initialColour,newColour,image);
        dfs(i+1,j,initialColour,newColour,image);
        dfs(i,j-1,initialColour,newColour,image);
        dfs(i,j+1,initialColour,newColour,image);

        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColour) {
        int intialColour = image[sr][sc];
        if(intialColour!=newColour)
            dfs(sr,sc,intialColour,newColour,image);
        return image;
    }
};