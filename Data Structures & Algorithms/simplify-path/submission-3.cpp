class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        string temp="";
        path=path+'/';
        for(int i=1;i<path.length();i++){
            if(path[i]=='/'){
                if(temp==".."){
                  if(!st.empty()){
                    st.pop();
                  }
                }else if(temp.length()>0 and temp!=".")
                {
                    st.push(temp);
                }
                temp="";
            }else{
                    temp=temp+path[i];
                }

        }
        string ans="";
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }
        if(ans==""){ans="/";}
        return ans;
    }
};