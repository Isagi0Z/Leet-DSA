class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        int subsets=1<<n;
        set<vector<int>> ans;
        
        for(int j=0;j<subsets;j++){
            vector<int> lis;
            for(int i=0;i<n;i++){
                if(j & (1 << i)){
                    lis.push_back(nums[i]);
                }

            }
            sort(lis.begin(),lis.end());
            ans.insert(lis);
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};