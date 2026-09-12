class Solution {
public:
    bool isMatch(string s, string p) {
        return helper(0, 0, s, p);
    }

    bool helper(int i, int j, string &s, string &p) {
        // base case
        if(j == p.length()) return i == s.length();

        bool match = (i < s.length() && (s[i] == p[j] || p[j] == '.'));

        // check for '*'
        if(j + 1 < p.length() && p[j+1] == '*') {
            return (helper(i, j+2, s, p) ||   // skip
                   (match && helper(i+1, j, s, p))); // use
        }

        // normal match
        if(match) return helper(i+1, j+1, s, p);

        return false;
    }
};