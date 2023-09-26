class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       int strt = 0;
       int end = N;
       int mid;
       while(strt<=end){
           mid = (strt+end)/2;
           if(arr[mid] == K){
               return 1;
           }
           else if(arr[mid] > K){
               end = mid-1;
           }
           else{
               strt = mid+1;
           }
       }
       return -1;
       
    }
};