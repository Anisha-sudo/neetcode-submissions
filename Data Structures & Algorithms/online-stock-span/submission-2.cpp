class StockSpanner {
public:
stack<pair<int,int>>st;
int count;
    StockSpanner() {
        count=0;
    }
    
    int next(int price) {
        count=0;
        count++;
        if(st.empty()){st.push({price,count});
        return count;}
        while(!st.empty() and st.top().first<=price){
            count=count+st.top().second;
            st.pop();
        }
        st.push({price,count});
        return count;

    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */