class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int> res;
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = m-1;
        for(int i=left; i<=right; i++){
            res.push_back(matrix[top][i]);
        }
        top++;
        for(int i=top; i<=bottom; i++){
            res.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right; i>=left; i--){
                res.push_back(matrix[bottom][i]);
            } 
            bottom--;
        }
        if(left<=right){
            for(int i=bottom; i>=top; i--){
                res.push_back(matrix[i][left]);
            }
            left++;
        }
        return res;
    }
};