//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int start =0;
	    int end = n-1;
	    int count = 0;
	    int mid;
	    while(start <= end){
	        mid = (start+end)/2;
	        if(arr[mid] == x){
	            count++;
	            break;
	        }
	        else if(arr[mid] < x){
	            start = mid + 1;
	        }
	        else{
	            end = mid - 1;
	        }
	    }
	    if(count == 0){
	        return count;
	    }
	    else{
	        int x = 1;
	        while(arr[mid] == arr[mid-x]){
	            x++;
	            count++;
	        }
	        x = 1;
	        while(arr[mid] == arr[mid+x]){
	            count++;
	            x++;
	        }
	        return count;
	    }
	}
};