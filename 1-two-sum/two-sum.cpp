class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int ,int> hash;
       int needed=0,n=nums.size();
       for (int i=0;i<n;i++){
        needed=target-nums[i];
        if (hash.find(needed)!=hash.end()){
            return {hash[needed],i};
        }
        hash[nums[i]]=i;
       }
       return {};
       
    }
};