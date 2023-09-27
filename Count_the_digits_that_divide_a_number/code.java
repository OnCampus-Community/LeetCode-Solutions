class Solution{
    static int evenlyDivides(int N){
        // code here
        int copy=N;
        int count=0;
        while(copy>0)
        {
            int d=copy%10;
            copy=copy/10;
            if(d==0)
            continue;
            if(N%d==0)
            count++;
        }
        return count;
    }
}
