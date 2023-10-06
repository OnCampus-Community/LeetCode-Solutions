class Solution{
    static int searchInSorted(int arr[], int N, int K)
    {
        
        // Your code here
         int i=0;
        while(i<N)
        {
            if(arr[i]==K)
            {
                return 1;
            }
            ++i;
        }
        return -1;
        
    }
}
