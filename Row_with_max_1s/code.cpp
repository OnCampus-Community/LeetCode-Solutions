//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    vector<int> temp;
	    int mx = 0;
	    int res = -1;
	    int count = 0;
	    for(int i=0; i<arr.size(); i++){
	        temp = arr[i];
	        count = 0;
	        for(int k=0; k<temp.size(); k++){
	            if(temp[k] == 1){
	                count++;
	            }
	        }
	        if(count > mx){
	            mx = count;
	            res = i;
	        }
	    }
	    return res;
	}

};