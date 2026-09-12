class Solution {
public:
    bool validPalindrome(string s) {
        int low=0,high=s.length()-1;
        if(isPalindrome(s))return true;

        while(low<=high){
           if(s[low]!=s[high]){
            return (isPalindrome(s.substr(low,high-low)) || isPalindrome(s.substr(low+1,high-low)));
           }
           low++;high--;
        }
        return true;
    }
    bool isPalindrome(string str){
        int low=0,high=str.length()-1;
        while(low<=high){
            if(str[low]!=str[high]){
                return false;} 

                low++;
                high--;
        }
        return true;

    }
};