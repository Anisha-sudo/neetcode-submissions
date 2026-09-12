class Solution {
public:
    bool isPalindrome(string s) {
        int low=0,high=s.size()-1;
        while(low<high){
            while(low<high && !isValid(s[low])){low++;}
            while(low<high && !isValid(s[high])){high--;}
            if(tolower(s[low])!=tolower(s[high]))return false;
            else{
                low++;
                high--;
            }
        }
        return true;
    }
    bool isValid(char s){
         return(s>='A'&& s<='Z')||(s>='a'&& s<='z')||(s>='0' && s<= '9');
    }
    
};
