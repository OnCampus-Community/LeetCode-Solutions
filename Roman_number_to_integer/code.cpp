class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int num = 0;
        for(int i=str.size()-1; i>=0; i--){
            if(str[i] == 'I'){
                num += 1;
            }
            else if(str[i] == 'V'){
                num += 5;
                if(str[i-1] == 'I'){
                    num -= 1;
                    i--;
                }
            }
            else if(str[i] == 'X'){
                num+=10;
                if(str[i-1] == 'I'){
                    num -= 1;
                    i--;
                }
            }
            else if(str[i] == 'L'){
                num+=50;
                if(str[i-1] == 'X'){
                    num -= 10;
                    i--;
                }
            }
            else if(str[i] == 'C'){
                num += 100;
                if(str[i-1] == 'X'){
                    num -= 10;
                    i--;
                }
            }
            else if(str[i] == 'D'){
                num += 500;
                if(str[i-1] == 'C'){
                    num -= 100;
                    i--;
                }
            }
            else if(str[i] == 'M'){
                num += 1000;
                if(str[i-1] == 'C'){
                    num -= 100;
                    i--;
                }
            }
        }
        return num;
    }
};