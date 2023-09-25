//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    int count = 0;
	    vector<int> res;
	    for(int i=0; i<n; i++){
	        if(arr[i] == 0){
	            count++;
	        }
	        else{
	            res.push_back(arr[i]);
	        }
	    }
	    for(int i=0; i<count; i++){
	        res.push_back(0);
	    }
	    for(int i=0; i<n; i++){
	        arr[i] = res[i];
	    }
	}
};