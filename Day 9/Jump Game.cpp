class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach = 0;
        int i ;
        int n = nums.size();
    for ( i = 0; i < n && i <= reach; ++i)
        reach = max(i + nums[i], reach);
    return i == n;
    }
};