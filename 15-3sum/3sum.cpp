class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>st;
       
        sort(nums.begin(),nums.end());
        int j,k=nums.size()-1;
        for (int i=0;i<nums.size()-1;i++){
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                vector<int>arr;
                if (nums[i]+nums[j]+nums[k]==0){
                    arr.push_back(nums[i]);
                    arr.push_back(nums[j]);
                    arr.push_back(nums[k]);
                    st.insert(arr);
                    if (nums[i]==nums[k]){
                        break;
                    }
                    k--;
                    j++;
                }
                else if (nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    k--;
                }
        
            }
        }
        for (auto iterator: st){
            ans.push_back(iterator);
        }
        return ans;
    }
};