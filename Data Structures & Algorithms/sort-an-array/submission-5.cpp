class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
private:
    void mergeSort(vector<int>&nums,int low, int high){
       
        if(low>=high)return;
        int mid=(low+high)/2;
            mergeSort(nums,low,mid);
            mergeSort(nums,mid+1,high);
            merge(nums,low,mid+1,high);
        
    }
    void merge(vector<int>&nums,int low,int mid,int high){
        vector<int>temp;
          int i=low;
          int j=mid;

        while(i<=mid-1 && j<=high){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i++]);
            }
            else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=mid-1){temp.push_back(nums[i++]);}
        while(j<=high){temp.push_back(nums[j++]);}

        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }
};