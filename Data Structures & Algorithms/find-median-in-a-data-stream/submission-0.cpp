class MedianFinder {
public:
   
   priority_queue<int>small;
   priority_queue<int,vector<int>,greater<int>>large;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        small.push(num);
       if(small.size()>large.size()){
        int val=small.top();
            small.pop();
            large.push(val);
          
        }if(!small.empty() and !large.empty() and small.top()>large.top()){
            int smallval=small.top(); 
            small.pop();
            small.push(large.top());
            large.pop();
            large.push(smallval); 
        }
    }
    
    double findMedian() {
         if(small.size()==large.size()){
            return (small.top()+large.top())/2.0;
         }else return large.top();
    }
};
