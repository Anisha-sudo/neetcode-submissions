class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=INT_MIN,high=0,mid;
        //sort(weights.begin(),weights.end());
        for(int i=0;i<weights.size();i++){
            low=max(low,weights[i]);
            high=high+weights[i];
        }

        while(low<=high){
             mid=low+(high-low)/2;
            int d=1,c=0;
            for(int i=0;i<weights.size();i++){
                if(c+weights[i]>mid){
                    d++;
                    c=weights[i];
                 }else{ c=c+weights[i];}
            }
            cout<<"d:"<<d<<endl;
            if(d>days){
                low=mid+1;
            }else {
                high=mid-1;
            }
        }return low;
    }
};