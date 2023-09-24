class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
    vector<int> res;
    sort(nums.begin(), nums.end());
    int i = 0;
    while(i<nums.size()){
        if(nums[i] == nums[i+1]){
            i+=2;
        }
        else{
            res.push_back(nums[i]);
            i++;
        }
    }
    return res;
    }
};