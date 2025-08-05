// Problem - https://leetcode.com/problems/subarray-product-less-than-k/
// Time Complexity - O(n)
// Space Complexity - O(1)
#include <vector>
using namespace std;

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 0) return 0;
        int cnt = 0;
        int left  = 0, prod = 1;

        for(int right = 0; right < nums.size(); right++){
            prod *= nums[right];

            while(left <= right and prod >= k){
                prod /= nums[left];
                left++;
            }

            cnt += right - left + 1;
        }

        return cnt;
    }
};