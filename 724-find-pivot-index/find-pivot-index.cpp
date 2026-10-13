class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>prefix;
        prefix.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            prefix.push_back(prefix[i-1]+nums[i]);
        }
        int difference=0;
        if (prefix[0]==prefix[nums.size()-1]){
            return 0;
        }
        for (int i=1;i<nums.size();i++){
            difference=prefix[nums.size()-1]-prefix[i];
            if (difference==prefix[i-1]){
                return i;
            }
        }
        return -1;
    }
};