class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         int diff_value=INT_MAX;
        int sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            int start=i+1;
            int end=nums.size()-1;
            int temp_sum;
            for(int j=i+1;j<nums.size();j++)
            {
                temp_sum=nums[i]+nums[start]+nums[end];
                int temp_diff=abs(nums[i]+nums[start]+nums[end]-target);
                if(diff_value >temp_diff)
                {
                    diff_value=temp_diff; 
                    sum=temp_sum;
                }
                if(temp_sum>target)
                    end--;
                if(temp_sum<=target)
                    start++;
                if(end<=start)
                    break;
            }
        }
        return sum;
    }
};