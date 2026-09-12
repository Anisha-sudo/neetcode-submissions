class Solution {
public:
    bool isPalindrome(string s) {

        string str="";
        for(auto it:s){
            if((it>='a' and it<='z')||(it>='A' and it<='Z')||(it>='0' and it<='9')){
              str=str+(char)tolower(it);
            }
        }
        cout<<str;
        int i=0,j=str.length()-1;

        while(i<j and str[i]==str[j]){
            i++;j--;
        }
        if(i<j)return false;
        return true;

    }
};
