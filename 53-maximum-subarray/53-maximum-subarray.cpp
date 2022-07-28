class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int cur_sum=0,overall_sum=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            cur_sum=cur_sum+nums[i];
            if(cur_sum>overall_sum)
            {
                overall_sum=cur_sum;
            }
            if(cur_sum<0)
            {
                cur_sum=0;
            }
        }
        return overall_sum;
        
        
    }
};