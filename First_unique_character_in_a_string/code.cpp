class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> hashh;
        for(int i=0; i<s.size(); i++){
            hashh[s[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            if(hashh[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};