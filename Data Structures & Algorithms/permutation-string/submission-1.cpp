class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int>mp;
        for(auto c:s1){
            mp[c]++;
        }
        int l=s1.length();
        int i=0,j=0;
        while(i<s2.length()){
            if(mp.find(s2[i])!=mp.end()){
                mp[s2[i]]--;
                if(mp[s2[i]]==0){
             mp.erase(s2[i]);}
             }
             if(mp.size()==0){
                cout<<"i:"<<i<<endl;
                while(i-j+1!=l){
                    j++;
                }
                cout<<"j:"<<j;
               if  (isAnagram(s1,s2.substr(j,l))){
                return true;
               }
             }i++;
        }return false;
    }

    bool isAnagram(string s1,string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)return true;
        return false;
    }
};
