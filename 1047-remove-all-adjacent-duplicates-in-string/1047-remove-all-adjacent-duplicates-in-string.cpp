class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
                c=c+1;
            }
            else
            {
                if(st.top()==s[i])
                {
                    st.pop();
                    c=c-1;
                }
                else
                {
                    st.push(s[i]);
                    c=c+1;
                }
            }
        }
        vector<char>v;
        for(int i=0;i<c;i++)
        {
            v.push_back(st.top());
            st.pop();
        }
        string ss;
        for(int i=v.size()-1;i>=0;i--)
        {
            ss+=v[i];
        }
        return ss;
        
    }
};