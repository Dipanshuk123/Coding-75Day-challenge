class Solution {
public:
    int jump(vector<int>& nums) {
    int res = 0 , currmax = 0 , reach = 0;
        
        for(int index = 0 ; index < nums.size() - 1 ; index++)
        {
            if(index + nums[index] > currmax)
                currmax = index + nums[index];
            
            if(index == reach)
            {
                res++;
                reach = currmax;
            }
        }
        return res;
    }
};