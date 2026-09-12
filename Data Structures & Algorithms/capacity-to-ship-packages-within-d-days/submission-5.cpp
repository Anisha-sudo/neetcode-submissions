class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left=INT_MIN,right=0;
         
        for(int i=0;i<weights.size();i++){
            left=max(weights[i],left);
            right=right+weights[i];
        }

        while(left<=right){
            int mid=left+(right-left)/2;
              
            int daysWithAssumedCap=daysWithAssumedCapacity(mid,weights);

            if(daysWithAssumedCap>days){
               left=mid+1;
            }else{
                right=mid-1;
            }


        }
        return left;
    }

    int daysWithAssumedCapacity(int capacity,vector<int>&weights){
        int ans=1,w=0;
        for(int i=0;i<weights.size();i++){
        
            if(w+weights[i]>capacity){
                ans++;
                w=weights[i];
            }else{
                w=w+weights[i];
            }
        }
        return ans;
    }
};