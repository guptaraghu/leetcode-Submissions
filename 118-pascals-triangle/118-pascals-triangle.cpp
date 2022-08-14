class Solution {
public:
    vector<vector<int>> generate(int row) {
        vector<vector<int>>ans;
        for(int i=0;i<row;i++)
        {
            vector<int>temp;
            for(int j=0;j<=i;j++)
            {
                int x;
                if(j==0 || j==i)
                    temp.push_back(1);
                else
                {
                    x = ans[i - 1][j - 1] + ans[i - 1][j];
                    temp.push_back(x);
                }
            }
           ans.push_back(temp);
            
        }
        return ans;
    }
};