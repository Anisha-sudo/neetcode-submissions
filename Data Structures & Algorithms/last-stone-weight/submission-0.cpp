class Solution {
public:
    priority_queue<int>maxHeap;
    int lastStoneWeight(vector<int>& stones) {
        for(auto it:stones){
            maxHeap.push(it);
        }

        while(maxHeap.size()>1){
            int var1=maxHeap.top();
            maxHeap.pop();
            int var2=maxHeap.top();
            maxHeap.pop();

            if(var1==var2){continue;}
            if(abs(var1-var2)>0){
                maxHeap.push(abs(var1-var2));
            }
        }
        if(maxHeap.empty()){
            return 0;
        }
        return maxHeap.top();
    }
};
