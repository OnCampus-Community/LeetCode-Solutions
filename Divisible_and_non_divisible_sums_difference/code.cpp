#include<bits/stdc++.h>
using namespace std;

int differenceOfSums(int n, int m) {
        int num1= 0;
        int num2 = 0;
        for(int i=1; i<=n; i++){
            if(i%m == 0){
                num2+=i;
            }
            else{
                num1 += i;
            }
        }
        return num1-num2;
}

int main(){

    int n = 5;
    int m = 6;
    
    cout << differenceOfSums(n, m) << endl;

    return 0;
}