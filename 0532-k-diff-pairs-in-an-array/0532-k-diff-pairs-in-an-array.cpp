class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=1;
        int count=0;
        int n=nums.size();

        while(right<n){
            if(left==right){
                right++;
                continue;
            }
            int diff=nums[right]-nums[left];

            if(diff==k){
                count++;

                int leftValue=nums[left];
                int rightValue=nums[right];
                while(left<n && nums[left]==leftValue){
                    left++;
                }
                while(right<n && nums[right]==rightValue){
                    right++;
                }
            }
            else if(diff<k){
                right++;
            }
            else{
                left++;
            }
        }
        return count;
    }
};