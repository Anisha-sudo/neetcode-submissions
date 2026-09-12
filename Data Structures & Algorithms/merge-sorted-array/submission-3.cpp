class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int j=m-1,k=n-1,i=n+m-1;
        while(j>=0 && k>=0){
           if(nums1[j]>nums2[k]){
            nums1[i]=nums1[j];
            j--;
           }else {
            nums1[i]=nums2[k];
            k--;
           }
           i--;
        }   
        while(k>=0){
            nums1[i--]=nums2[k--];
        }
        
     }
};