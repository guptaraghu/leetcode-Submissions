class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
                v.push_back(nums[i]);
        }
        if(v.size()==0)
        {
            return 0;
        }
        else
        {
        sort(v.begin(),v.end());
        int c=0;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]-v[i-1]!=0)
            {
                c=c+1;
            }
        }
        
    return c+1;
        }
    }
};