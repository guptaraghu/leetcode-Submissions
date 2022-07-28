class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        vector<int>v1;
        vector<int>v2;
        int size=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(v1.empty())
                v1.push_back(nums[i]);
            else
                v1.push_back(v1[i-1]+nums[i]);
        }
        k=size-k;
        for(int i=0;i<v1.size()-k+1;i++)
        {
            if(k==0)
                return v1[v1.size()-1];
            else
            {
                if(i==0)
                    v2.push_back(v1[k-1]);
                else
                    v2.push_back(v1[i+k-1]-v1[i-1]);
                   }
        }
        int minimum=v2[0];
         for(int i=0;i<v2.size();i++)
         {
        if(v2[i]<minimum)
            minimum=v2[i];
         }
        int ans=v1[v1.size()-1]-minimum;
        return ans;
    }
};