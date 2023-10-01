class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        vector<vector<int>> res = matrix;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                if(matrix[i][j] == 1){
                    for(int k=0; k<matrix.size(); k++){
                        res[k][j] = 1;
                    }
                    for(int k=0; k<matrix[0].size(); k++){
                        res[i][k] = 1;
                    }
                }
            }
        }
        matrix = res;
    }
};