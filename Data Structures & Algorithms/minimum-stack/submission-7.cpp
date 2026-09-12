class MinStack {

private:
     stack<int>st1;
    stack<int>st2;
public:
   
    MinStack() {
   
    }
    
    void push(int val) {
        st1.push(val);
        if(st2.empty()){
            st2.push(val);
        }else if(!st2.empty()){
            st2.push(min(st2.top(),val));
        }
    }
    
    void pop() {
        if(!st1.empty() and !st2.empty()){
        st1.pop();
        st2.pop();
        }

    }
    
    int top() {
        if(!st1.empty())
       {return st1.top();}
       return 0;
        
    }
    
    int getMin() {
        if(!st2.empty()){
        return st2.top();}
        return 0;
    }
};
