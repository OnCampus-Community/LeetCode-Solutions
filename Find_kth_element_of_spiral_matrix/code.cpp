class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int top = 0;
 		int bottom = n-1;
 		int left = 0;
 		int right = m-1;
 		vector<int> res;
 		while(left<=right && top<=bottom){
 		    for(int i=left; i<=right; i++){
 		        res.push_back(a[top][i]);
 		    }
 		    top++;
 		    for(int i=top; i<=bottom; i++){
 		        res.push_back(a[i][right]);
 		    }
 		    right--;
 		    if(top<=bottom){
 		        for(int i=right; i>=left; i--){
 		            res.push_back(a[bottom][i]);
 		        }
 		        bottom--;
 		    }
 		    if(left<=right){
 		        for(int i=bottom; i>=top; i--){
 		            res.push_back(a[i][left]);
 		        }
 		        left++;
 		    }
 		}
 		return res[k-1];
    }
};