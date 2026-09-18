class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        
        vector<pair<int,int>> arr;
        for(auto x:freq){
            arr.push_back({x.second,x.first});
        }
        sort(arr.rbegin(),arr.rend());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};