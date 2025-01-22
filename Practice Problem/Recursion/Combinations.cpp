// problem: https://leetcode.com/problems/combinations/

class Solution {
public:
    vector<vector<int>> ans;
    void combinataion_gen(int n, int k, int s, vector<int>& comb){
        if(comb.size() == k){
            ans.push_back(comb);
            return;
        }

        for(int i = s; i <= n; i++){
            comb.push_back(i);
            combinataion_gen(n, k, i+1, comb);
            comb.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> comb;

        combinataion_gen(n, k, 1, comb);
        return ans;
    }
};