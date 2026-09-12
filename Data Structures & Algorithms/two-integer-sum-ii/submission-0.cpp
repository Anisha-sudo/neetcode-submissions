class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0,high=numbers.size()-1;
        while(low<high){
            if(numbers[low]+numbers[high]<target){
                low++;
            }
            else if(numbers[low]+numbers[high]>target){
                
                high--;
                cout<<high<<" ";
            }
            else return vector<int>{low+1,high+1};
        }
        return vector<int>{0};
    }
};
