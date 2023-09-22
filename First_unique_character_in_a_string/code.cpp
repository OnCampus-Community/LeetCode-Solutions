#include<bits/stdc++.h>
using namespace std;

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

int main(){

    string s;
    cout << "Enter the string : ";
    cin >> s;
    cout << "The first unique character is at : " << firstUniqChar(s) << endl;
    
    return 0;
}