class Solution {
public:
    void findcombination(int i,int target,vector<int>& arr,vector<int>& ds,vector<vector<int>>& ans){
        if(i==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick
        if(arr[i]<=target){
            ds.push_back(arr[i]);
            findcombination(i,target-arr[i],arr,ds,ans);
            ds.pop_back();
        }
        findcombination(i+1,target,arr,ds,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        findcombination(0,target,arr,ds,ans);
        return ans;
    }
};