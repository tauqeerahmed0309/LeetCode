class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
    int m=matrix.size();
    vector<int>rows;
    vector<int>col;
    
    int n= matrix[0].size()-1;
    for(int i=0; i<m;i++){
    for(int j=0;j<=n;j++){
    if(matrix[i][j]==0){
        rows.push_back(i);
        col.push_back(j);
    }
    }}
       
     for(int i=0;i<m;i++){
        for(int j=0;j<=n;j++){
            if(find(rows.begin(),rows.end(),i)!=rows.end()||
                 find(col.begin(),col.end(),j)!=col.end()){
                matrix[i][j]=0;
                }
            }
        } 
   
    }
};