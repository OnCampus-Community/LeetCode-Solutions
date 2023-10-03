class Solution{
    public:
    string colName (long long int n)
    {
        // your code 
        string res = "";
        while(n>0){
            n--;
            char temp = 'A'+n%26;
            n=n/26;
            res+=temp;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};