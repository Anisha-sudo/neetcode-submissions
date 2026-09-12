class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> p;
        for(int i=0;i<position.size();i++){
            p.push_back({position[i],speed[i]});
        }
        sort(p.rbegin(),p.rend());

  int fleets=1;
        double prevTime=(double)(target-p[0].first)/p[0].second;
         
         for(int i=1;i<position.size();i++){
            double currTime= (double)(target-p[i].first)/p[i].second;

            if(prevTime<currTime){
                fleets++;
                prevTime=currTime;
            }
         }
         return fleets;
    }
};
