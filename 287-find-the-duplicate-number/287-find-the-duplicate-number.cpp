class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]=m[nums[i]]+1;
        }
        int Duplicate;
        for(auto value :m )
        {
            if(value.second>1)
            {
                 Duplicate=(value.first);
                break;
            }
        }
        return Duplicate;
    }
};