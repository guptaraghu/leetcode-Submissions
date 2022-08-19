class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
         stack<int>st;
        map<int,int>m;
    int size1=nums.size();
        for(int i=0;i<size1;i++)
            nums.push_back(nums[i]);
        int size=nums.size();
        int NG[size];
        for(int i=size-1;i>=0;i--)
        {
                while(!st.empty()&&st.top()<=nums[i])
            {
                st.pop();
            }
            if(!st.empty()==true)
            {
                NG[i]=st.top();
                 st.push(nums[i]);
            }
            else
            {
                NG[i]=-1;
                st.push(nums[i]);
            
            
        }
        }
        vector<int>v1;
        for(int i=0;i<size1;i++)
        {
            v1.push_back(NG[i]);
        }
       return v1;
    }
};