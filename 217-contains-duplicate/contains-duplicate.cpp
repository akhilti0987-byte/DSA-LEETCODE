class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>hash{0};
        for (int i=0;i<nums.size();i++){
            if (hash.find(nums[i])!=hash.end()){
                return true;
            }
            hash[nums[i]]++;
        }
        return false;
    }

};