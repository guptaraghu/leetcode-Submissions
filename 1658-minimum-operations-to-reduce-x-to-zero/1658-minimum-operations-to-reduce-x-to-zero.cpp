class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long int sum=0;
        for(long long int i=0;i<nums.size();i++)
            sum=sum+nums[i];
        long long int subarraysum=sum-x;
        if(subarraysum==0)
            return nums.size();
        if(subarraysum<0)
            return -1;
        int start=0;
        int maxlength=-1;
        int tempsum=0;
        for(int i=0;i<nums.size();i++)
        {
             tempsum=tempsum+nums[i];
       while(tempsum>subarraysum)
        {
           tempsum=tempsum-nums[start];
           start++;
       }
            if(tempsum==subarraysum)
            {
                int tempmaxlength=i-start+1;
                maxlength=max(maxlength,tempmaxlength);
            }
        }
        if(maxlength!=-1)
        return nums.size()-maxlength;
        else
            return maxlength;
        
    }
};