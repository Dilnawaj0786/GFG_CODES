class Solution {
  public:
    bool magicSquare(vector<vector<int>>& mat) {
        // code here
        int sum =0;
        for(int i=0;i<mat.size();i++){
            sum += mat[0][i];
        }
        
        // for distinct checking
        
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size()-1;j++){
               if(mat[i][j] == mat[i][j+1]){
                   return false;
               }
           }
        }
        
        for(int i=0;i<mat.size()-1;i++){
            for(int j=0;j<mat[i].size();j++){
               if(mat[j][i] == mat[j][i+1]){
                   return false;
               }
           }
        }
        
        // row sum
        for(int i=0;i<mat.size();i++){
            int cuur_sum = 0;
            for(int j=0;j<mat[i].size();j++){
               cuur_sum += mat[i][j];
           }
           
           if( cuur_sum != sum){
               return false;
           }
        }
        
        // column sum
       for(int i=0;i<mat.size();i++){
            int cuur_sum = 0;
            for(int j=0;j<mat[i].size();j++){
               cuur_sum += mat[j][i];
           }
           
           if( cuur_sum != sum){
               return false;
           }
        }
        
        int primary = 0;
        int secondary = 0;
        for(int i=0;i<mat.size();i++){
           primary += mat[i][i];
           secondary += mat[i][mat[i].size()-1-i];
           
        }
        
        if( primary != sum){
            return false;
        }
           
        if( secondary != sum){
            return false;
        }
        return true;
        
    }
};