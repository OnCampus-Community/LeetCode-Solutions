

//User function Template for Java

class Solution
{
    public int[] singleNumber(int[] arr)
    {
         // code here
         int n=arr.length;
        int all=0;
        for(int i =0; i<n; i++)
        all = all^arr[i];
        
        
        //s2  rightmost set bit 
        int m = all & -all;
        
        // s3
        int g1=0; int g2=0;
        for(int i =0; i<arr.length; i++)
        {
            if((m&arr[i])==0)
            {
                g1 ^= arr[i];
            }
            else
            g2 ^= arr[i];
        }
        int ans[] = new int[2];
        if(g1>g2)
        {
            ans[0]=g2; ans[1] = g1;
            
        }
        else
         {ans[0]=g1; ans[1] = g2;}
         
         return ans;
    }
}
