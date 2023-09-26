class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        map<int, int> check;
        for(int i=0; i<n; i++){
            check[arr[i]]++;
        }
        for(int i=0; i<n; i++){
            if(check[arr[i]] > 1){
                return i+1;
            }
        }
        return -1;
    }
};