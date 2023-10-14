class Solution {
    public int minFallingPathSum(int[][] matrix) {
        int min=Integer.MAX_VALUE;
        int len=matrix.length;
        int[][] dp=new int[len][len];
        for(int i=0;i<len;i++) {
            //First row of matrix is initialised to dp array
            dp[0][i]=matrix[0][i];
        }
        //Since DP 1st row already defined, so we start from 2nd row i.e., dp[1]
        for(int i=1;i<len;i++){
            for(int j=0;j<len;j++) {
                if(j==0)
                dp[i][j]=matrix[i][j]+Math.min(dp[i-1][j],dp[i-1][j+1]);
                else if(j==len-1)
                dp[i][j]=matrix[i][j]+Math.min(dp[i-1][j],dp[i-1][j-1]);
                else
                dp[i][j]=matrix[i][j]+Math.min(Math.min(dp[i-1][j-1],dp[i-1][j]),dp[i-1][j+1]);
            }
        }    
        for(int i=0;i<len;i++) {
            if(dp[len-1][i]<min)
                min=dp[len-1][i];
            }
        return min;        
    }
}