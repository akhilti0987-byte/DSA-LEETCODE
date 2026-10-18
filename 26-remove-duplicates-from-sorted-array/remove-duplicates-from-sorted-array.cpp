class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fast=1,slow=0;
        int count=1;
        for (int fast=1;fast<nums.size();fast++){
            if (nums[fast]!=nums[slow]){
                slow++;
                swap(nums[fast],nums[slow]);
                count++;
            }
        }
        return count;
    }
};