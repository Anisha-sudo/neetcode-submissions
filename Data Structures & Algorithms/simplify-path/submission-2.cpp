class Solution {
public:
    string simplifyPath(string path) {
        path=path+"/";
        char c;int j=1;
        stack<string>st;
        string ans="";
        string temp="";

        while(j<path.length()){
            
            if(path[j]=='/'){
            
            if(temp==".." ){
            if( !st.empty()){
                  st.pop();}
            }else if(temp.length()>0 and temp!="."){
                st.push(temp);
            }
               temp="";
            }else{
                temp=temp+path[j];
                
            }
            j++;
        }

        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
      if(ans==""){ans="/";}
        return ans;
    }
};