class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int x=abs(nums[i]);
             if(nums[x-1]>0)
                 nums[x-1]=nums[x-1]*-1;
            else
                v.push_back(x);
           }
        return v; 
    }
};