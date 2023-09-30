class Solution {

    public static int maxOnes(int arr[], int n) {
        // Your code goes here
        int total=0,currtotal=0,max=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) total++;
        }
        max=total;
        for(int i=0;i<n;i++){
            if(arr[i]==1&&currtotal!=0){
                currtotal-=1;
            }else if(arr[i]==0){
                currtotal+=1;
                max=Math.max(max,(currtotal+total));
            }
        }
        return max;
    }
}
