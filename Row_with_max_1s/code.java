//User function Template for Java

class Solution {
    int rowWithMax1s(int arr[][], int n, int m) {
        int c=0,max=0,res=-1;
        for(int i=0;i<n;i++)
        {
            c=0;
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==1)
                c++;
                if(c>max)
                {
                    max=c;
                    res=i;
                }
            }
        }
        return res;
    }
}
