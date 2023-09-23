class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int end;
        string res;
        char temp;

        for(int i=0; i<s.size(); i++){
            if(s[i] == ' '){
                end = i-1;
                for(int j=end; j>=start; j--){
                    temp = s[j];
                    res.append(1,temp);
                }
                res.append(" ");
                start = i+1;
            }
            if(i == s.size()-1){
                end = i;
                for(int j=end; j>=start; j--){
                    temp = s[j];
                    res.append(1,temp);
                }
            }
        }

        return res;
    }
};