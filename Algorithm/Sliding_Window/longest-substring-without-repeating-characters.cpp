// Problem - https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, mx = 0;
        unordered_set<char> st;
        for(right = 0; right < s.size(); right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            mx = max(mx, right - left + 1);
        }

        return mx;
    }
};

// Time complexity: O(n)
// Space complexity: O(n)