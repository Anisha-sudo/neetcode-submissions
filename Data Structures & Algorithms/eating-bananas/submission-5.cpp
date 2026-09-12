class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=INT_MIN,mid;
       for(int i=0;i<piles.size();i++){
        high=max(high,piles[i]);
       }
        while(low<=high){
             mid=low+(high-low)/2;
             cout<<mid<<endl;
            long long time=0;
            for(int i=0;i<piles.size();i++){
                time=time+piles[i]/mid;
                if(piles[i]%mid!=0){
                    time++;
                }
            }
            cout<<"time"<<time<<endl;
            cout<<"high"<<high<<endl;
            cout<<"low"<<low<<endl;
            if(time<=h){
              high=mid-1;
            }else {
                low=mid+1;
            }
        }
        return low;
    }
};
