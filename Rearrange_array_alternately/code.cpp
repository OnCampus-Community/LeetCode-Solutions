class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	vector<long long> res;
    	for(int i=0; i<n/2; i++){
    	    res.push_back(arr[n-i-1]);
    	    res.push_back(arr[i]);
    	}
    	if(n%2!=0){
    	    res.push_back(arr[n/2]);
    	}
    	for(int i=0; i<n; i++){
    	    arr[i] = res[i];
    	}
    	 
    }
};