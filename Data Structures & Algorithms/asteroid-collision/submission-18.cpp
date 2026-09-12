class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;
        int i = 0;
        while (i < asteroids.size()) {
            if (st.empty() || asteroids[i] > 0 || st.top() < 0) {
                // Same direction or moving away: no collision
                st.push(asteroids[i]);
                i++;
            } else {
                // asteroids[i] is negative, st.top() is positive: collision
                if (abs(asteroids[i]) == abs(st.top())) {
                    st.pop();
                    i++;
                } else if (abs(asteroids[i]) < abs(st.top())) {
                    i++;
                } else {
                    st.pop();
                }
            }
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};