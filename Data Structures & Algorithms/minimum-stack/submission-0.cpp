class MinStack {

private:
stack<int>st;
stack<int>q;

   public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
       
    }
    
    void pop() {
        st.pop();
   
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int mini=INT_MAX;
        while(st.size()>0){
            int val=st.top();
            mini=min(mini,val);
            q.push(val);
            st.pop();
        }
        while(!q.empty()){
            st.push(q.top());
            q.pop();
        }
        return mini;
    }
};
