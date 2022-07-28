class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>v;
         long long int x,y;
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                c=c+1;
        }
        if(c==nums.size())
            return "0";
        else
        {
            for(long long int i=0;i<nums.size();i++)
        {
            string str=to_string(nums[i]);
            v.push_back(str);
        }
            sort(v.begin(),v.end());
        for(long long int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                unsigned long long int result1=0;
                unsigned long long int result2=0;
                string m=v[i]+v[j];
                string n=v[j]+v[i];
                for(long long int i=0;i<m.size();i++)
                {
                    x=m[i]-'0';
                    result1=(result1*10)+x;
                }
                 for(int i=0;i<n.size();i++)
                {
                     y=n[i]-'0';
                    result2=(result2*10)+y;
                }
                if(result2>result1)
                    swap(v[i],v[j]);
            }
             }
            string ans;
        for(int i=0;i<nums.size();i++)
            ans=ans+v[i];
         return ans;
        }
       }
};