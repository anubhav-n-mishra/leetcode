class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ans;
        for(int i = 0 ; i < nums.size() ; i++){
           int a =  target- nums[i];
           if(ans.find(a) != ans.end())
               return {i,ans[a]};
            ans[nums[i]] = i;
        }
        return {0,0};
    }
};