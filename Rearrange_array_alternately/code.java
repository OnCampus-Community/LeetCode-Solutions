

class Solution{
    
    // temp: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    public static void rearrange(long arr[], int n){
        
        // Your code here
        ArrayList<Long> list=new ArrayList<Long>();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            list.add(arr[j]);
            list.add(arr[i]);
            i++;
            j--;
        }
        if(i==j)
        {
            list.add(arr[i]);
        }
        
        for(int k=0;k<n;k++)
        {
            arr[k]=list.get(k);
        }


        
    }
    
}
