class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long water = 0;
        vector<int> left;
        int maxxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxxi = max(maxxi, arr[i]);
            left.push_back(maxxi);
        }
        vector<int> right;
        maxxi = INT_MIN;
        for(int i=n-1; i>=0; i--){
            maxxi = max(maxxi, arr[i]);
            right.push_back(maxxi);
        }
        reverse(right.begin(), right.end());
        long long maxima;
        for(int i=0; i<n; i++){
            maxima = min(right[i], left[i]) - arr[i];
            if(maxima > 0){
                water+=maxima;
            }
        }
        return water;
    }
};