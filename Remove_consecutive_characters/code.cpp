class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string str;
        char temp;
        int i=0;
        int x=1;
        while(i<S.size()){
            x=1;
            if(S[i] == S[i+1]){
                while(S[i] == S[i+x]){
                    x++;
                }
                temp = S[i];
                str.append(1, temp);
                i+=x;
            }
            else{
                temp = S[i];
                str.append(1, temp);
                i+=x;
            }
        }
        return str;
    }
};