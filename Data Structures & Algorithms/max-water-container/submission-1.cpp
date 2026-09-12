class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low=0,high=heights.size()-1;
        int ans=INT_MIN;
        while(low<=high){
          ans=max(ans,(high-low)*min(heights[low],heights[high]));
          if(heights[low]<heights[high]){
            low++;
          }else high--;
        }return ans;
    }
};
