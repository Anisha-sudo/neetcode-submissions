class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>ans;
        stack<int>st;
        int i=0;
       while(i<asteroids.size()){
            if(st.empty()){
                st.push(asteroids[i++]);
            }
            while((!st.empty() and asteroids[i]<0 and st.top()>0)){
                if(abs(asteroids[i])==abs(st.top())){
                   st.pop();
                   i++;
                }else if(abs(asteroids[i])<abs(st.top())){
                  i++;
                }else{
                    st.pop();
                }
            }
               if(i<asteroids.size()){
                st.push(asteroids[i]);}
                i++;
            
     }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};