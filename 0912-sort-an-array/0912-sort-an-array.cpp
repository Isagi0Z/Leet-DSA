class Solution {
public:
    vector<int> sortArray(vector<int> nums){
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }

    void mergeSort(vector<int>& nums, int beg, int end) {
        
        int mid=(beg+end)/2;
        if(beg<end){
            mergeSort(nums,beg,mid);
            mergeSort(nums,mid+1,end);
            merge(nums,beg,mid,end);
        }
        
    }

    void merge(vector<int>& nums,int beg,int mid,int end){
        vector<int> temp;
        int i=beg,j=mid+1;
        while(i<=mid && j<=end){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        if(i>mid){
            while(j<=end){
                temp.push_back(nums[j]);
                j++;
            }
        }
        else{
            while(i<=mid){
                temp.push_back(nums[i]);
                i++;
            }
        }
        int k=0;
        while(k<temp.size()){
            nums[beg+k]=temp[k];
            k++;
        }
    }
};