class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int left = 0;
int right = matrix[0].size() - 1;
int top = 0;
int bottom = matrix.size() - 1;

while (left <= right && top <= bottom) {

    // Traverse left to right
    for (int i = left; i <=right; i++) {
        ans.push_back(matrix[top][i]);
    }
    top++;

    // Traverse top to bottom
    for (int j = top; j <= bottom; j++) {
        ans.push_back(matrix[j][right]);
    }
    right--;

        if(top<=bottom){
    for (int k = right; k >= left; k--) {
        ans.push_back(matrix[bottom][k]);
    }
    bottom--;
        }
    if(left<=right){
    for (int l = bottom; l >= top; l--) {
        ans.push_back(matrix[l][left]);
    }
    left++;
}}
return ans;
    }
};