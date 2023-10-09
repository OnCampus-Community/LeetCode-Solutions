#include<bits/stdc++.h>
using namespace std;

int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        vector<int> res;
        int j = 0;
        int count = 0;
        sort(processorTime.begin(), processorTime.end());
        reverse(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end());
        for(int i=0; i<tasks.size(); i++){
            if(i>0 && i%4 == 0){
                j++;
                res.push_back(count);
                count = 0;
            }
            count = max(count, processorTime[j]+tasks[i]);
        }
        res.push_back(count);
        sort(res.begin(), res.end());
        return res[res.size()-1];
}

int main(){

    vector<int> processorTime = {8, 10};
    vector<int> tasks = {2, 2, 3, 1, 8, 7, 4, 5};

    cout << minProcessingTime(processorTime, tasks) << endl;

    return 0;
}