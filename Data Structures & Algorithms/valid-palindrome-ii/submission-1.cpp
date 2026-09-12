class Solution {
public:
    bool validPalindrome(string s) {
     for(int i=0;i<(s.size()-1)/2;i++){
        int low=0,high=s.size()-1;
        if(isPalindrome(s,low,high))return true;

        while(low<high){
            if(s[low]!=s[high]){
                return isPalindrome(s,low+1,high)|| isPalindrome(s,low,high-1);
            }
            low++;
            high--;
        }
    }
    return true;
    }
    bool isPalindrome(string s,int low,int high){
        while(low<high){
            if(s[low]!=s[high])
            return false;
            low++;
            high--;
        }
        return true;
    }
};