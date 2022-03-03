class Solution {
   
public:
    
     bool valid(vector<vector<int>>& image,int i,int j,int row,int col, int color){
         if(i>=0 && i<row &&j>=0 && j<col && image[i][j]==color)
             return true;
         
        return false;
         

        
    }
    
    
  void  floodfil(vector<vector<int>>& image,int i,int j,int row,int col, int color,int newColor)
  {
      image[i][j]=newColor;
      if(valid(image,i+1,j,row,col,color))
          floodfil(image, i+1,j,row,col, color,newColor);
      if(valid(image,i-1,j,row,col,color))
          floodfil(image, i-1,j,row,col, color,newColor);
          
      if(valid(image,i,j+1,row,col,color))
            floodfil(image, i,j+1,row,col, color,newColor);

      if(valid(image,i,j-1,row,col,color))
            floodfil(image, i,j-1,row,col, color,newColor);

  }
    
    
    
    
    
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color=image[sr][sc];
        int row=image.size();
        int col=image[0].size();
        if(color==newColor)
            return image;
        
        floodfil(image, sr,sc,row,col, color,newColor);
      
        
            return image;
        
    }
};
