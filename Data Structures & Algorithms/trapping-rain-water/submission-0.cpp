class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size(),0);
        vector<int>right(height.size(),0);
         int n=height.size()-1;
         int ans=0;
        for(int i=1;i<height.size();i++){
            left[i]=max(height[i-1],left[i-1]);
           // height[n-i]=max(height[n-i+1],right[n-i+1]);
        }
         for(int i=height.size()-2;i>=0;i--){
            right[i]=max(height[i+1],right[i+1]);
        }
        for(int i=0;i<n;i++){
            cout<<left[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<left[i]<<" ";
        }
        for(int i=1;i<n;i++){
            int vol=min(left[i],right[i])-height[i];
            if(vol<=0)continue;
          ans=ans+vol;
        }
         return ans;
    }
};
