class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for (int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(operations[i]=="D"){
                int x=st.top();
                st.push(2*x);
            }
            else if(operations[i]=="C"){
                st.pop();
            }else{
                int val=std::stoi(operations[i]);
                st.push(val);
            }

        }
       
  int total = 0;
        while (!st.empty()) {
            total += st.top();
            st.pop();
        }
        return total;

    }
};