class Solution {
public:
    priority_queue<pair<int,char>>maxHeap;
    string longestDiverseString(int a, int b, int c) {
       if(a > 0) maxHeap.push({a,'a'});
if(b > 0) maxHeap.push({b,'b'});
if(c > 0) maxHeap.push({c,'c'});
          string ans="";
          while(!maxHeap.empty()){
                string temp;
                if(ans.length()>=2){
                   temp = ans.substr(ans.length() - 2);
                }
                int count=maxHeap.top().first;
                char c=maxHeap.top().second;
                bool hasTem=false;
                pair<int,char>tem;
                 if(temp+c ==string(3, c)){
                    tem=maxHeap.top();
                    hasTem=true;
                    maxHeap.pop();
                    if(maxHeap.empty()) break;
                     count=maxHeap.top().first;
                     c=maxHeap.top().second;
                 } 
                ans=ans+c;
                maxHeap.pop(); 
                if(count-1>0)maxHeap.push({count-1,c}); 
                if(hasTem)maxHeap.push(tem);
            
          }
          return ans;
        
    }
};