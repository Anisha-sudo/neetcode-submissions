class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int sign=-1;
        int right=1,left=0,res=1;

        while(right<arr.size()){
            if(arr[right-1]<arr[right] and sign!=0){
               res=max(res,right-left+1);
               right++;
               sign=0;
            }else if(arr[right-1]>arr[right] and sign!=1){
                res=max(res,right-left+1);
                right++;
                sign=1;
            }else{
                while(arr[right-1]==arr[right]){
                    right++;
                }
                left=right-1;
                sign=-1;
            }
        }
        return res;
    }
};