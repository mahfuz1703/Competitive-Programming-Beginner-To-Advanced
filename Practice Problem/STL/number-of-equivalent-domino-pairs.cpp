class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int cnt = 0;
        map<pair<int, int>, int> mp;
        for(auto u : dominoes){
            int mx = max(u[0], u[1]);
            int mn = min(u[0], u[1]);
            mp[{mn, mx}]++;
        }

        for(auto u :  mp){
            cnt += (u.second * (u.second-1))/2;
        }

        return cnt;
    }
};