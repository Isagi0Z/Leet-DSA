class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subsets=1<<n;
        
        vector<vector<int>> ans;
        for(int j=0;j<subsets;j++){
            vector<int> lis;
            for(int i=0;i<n;i++){
                if(j & (1<<i)){
                    lis.push_back(nums[i]);
                }
            }
            ans.push_back(lis);
        }
        return ans;
    }
};