class Solution{
    
    // arr: input array
    // n: size of array
    // Function to find the trapped water between the blocks.
    static long trappingWater(int arr[], int n) { 
        //this for leftmax boundary
       int leftmax[]=new int [n];
        leftmax[0]=arr[0];
        for(int i=1;i<n;i++){
            leftmax[i]=Math.max(arr[i],leftmax[i-1]);
        }
        //this for rightmax boundary
       int rightmax[]= new int[n];
        rightmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=Math.max(arr[i],rightmax[i+1]);
        }
        //calculate water
        long trappedwater=0;
        for(int i=0;i<n;i++){
            int water=Math.min(leftmax[i],rightmax[i]);
            trappedwater+=water-arr[i];
        }
        return trappedwater;
        
        
    } 
}

