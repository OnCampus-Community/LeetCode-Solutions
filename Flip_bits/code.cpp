class Solution{
    public:
    int maxOnes(int a[], int n)
    {
    int count_zero = 0;
    int count_one = 0;
    int max_zero = INT_MIN;

    for(int i=0; i<n; i++){
        if(a[i] == 0){
            count_zero++;
        }
        else{
            count_zero--;
            count_one++;
        }

        if(count_zero < 0){
            count_zero = 0;
        }
        max_zero = max(max_zero, count_zero);
    }
    return count_one+max_zero;
    }
};