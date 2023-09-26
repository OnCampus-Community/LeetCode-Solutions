class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        
        int res = -1;
        sort(a, a+size);
        int i = 0;
        int x = 1;
        if(size == 1){
            return a[0];
        }
        while(i<size){
            if(a[i] ==a[i+1]){
                x=1;
                while(a[i] ==a[i+x]){
                    x++;
                }
                if(x>(size/2)){
                    return a[i];
                }
                i+=x;
            }
            else{
                i++;
            }
        }
        return res;
    }
};