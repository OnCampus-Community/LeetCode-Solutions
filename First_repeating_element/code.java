class Solution {
    
    public static int firstRepeated(int[] arr, int n) {
        Map<Integer, Integer> mp = new HashMap<>();
        int count = 0;
        for(int i=0; i<n; i++){
            if(!mp.containsKey(arr[i])){
                mp.put(arr[i], 1);
            }
            else{
                mp.put(arr[i], mp.get(arr[i])+1);
            }
        }
        for(int j=0; j<n; j++){
            count++;
            if(mp.get(arr[j])>1)
                return count;
        }
        return -1;
    }
}
