class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
    vector<int> res;
        sort(arr, arr+n);
        int i=0;
        int x = 1;
        while(i<n){
            if(arr[i] == arr[i+1]){
                x= 1;
                res.push_back(arr[i]);
                while(arr[i] == arr[i+x]){
                    x++;
                }
                i+=x;
            }
            else{
                i++;
            }
        }
        if(res.size() == 0){
            res.push_back(-1);
        }
        return res;
    }
};