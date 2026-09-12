class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k=INT_MIN,left=1,right,mid=0;

        for(int i=0;i<piles.size();i++){
            k=max(k,piles[i]);
        }
        right=k;
        while(left<=right){
            mid=(left+right)/2;
            
            long long time=calTime(mid,piles);
            if(time>h){
                left=mid+1;
            }else if(time <=h){
                right=mid-1;
            }
        }
        return left;
    }
    long long calTime(int mid,vector<int>&piles){
           long long time=0;
        for(int i=0;i<piles.size();i++){
             time=time+piles[i]/mid;
             if(piles[i]%mid>0){
                time++;
             }
        }
        return time;
    }
};
