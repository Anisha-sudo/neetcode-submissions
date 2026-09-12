class Twitter {
public:
   map<int,vector<int>>mp;
   map<int,vector<pair<int,int>>>tweetMap;
   int time;
  
   
    Twitter() {
        time=0;
    }
    
    void postTweet(int userId, int tweetId) {
       tweetMap[userId].push_back({time++,tweetId});

       if(tweetMap[userId].size()>10){
        tweetMap[userId].erase(tweetMap[userId].begin());
       }
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>ans;
        vector<int>followersIds=mp[userId];
        followersIds.push_back(userId);
        vector<pair<int,int>> tweetList;
        priority_queue<pair<int,int>>maxHeap;
        for(auto it: followersIds){
        tweetList = tweetMap[it];
        for(auto it:tweetList){
            maxHeap.push(it);
        }
        }
         while(!maxHeap.empty() and ans.size()<10){
          ans.push_back(maxHeap.top().second);
          maxHeap.pop();
        }
     
        return ans;

    }
    
    
    void follow(int followerId, int followeeId) {
    if (followerId == followeeId) return;

    auto &v = mp[followerId];

    if (find(v.begin(), v.end(), followeeId) == v.end()) {
        v.push_back(followeeId);
    }
}
    
    void unfollow(int followerId, int followeeId) {
        mp[followerId].erase(std::remove(   mp[followerId].begin(),    mp[followerId].end(), followeeId), mp[followerId].end());
    }
};
