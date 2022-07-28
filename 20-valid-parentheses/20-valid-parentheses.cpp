class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        cout<<n;
        int c=0;
        if(n%2!=0)
            return false;
        else{
            
            stack<int>st;
            for(int i=0;i<n;i++)
            {
                if(st.empty())
                    st.push(s[i]);
                else
                {
                    if(st.top()=='(' &&s[i]==')')
                        st.pop();
                    
                    else if(st.top()=='{' &&s[i]=='}')
                        st.pop();
                    
                    else if(st.top()=='[' &&s[i]==']')
                        st.pop();
                    else
                        st.push(s[i]);
                }
                
            }
            if(st.size()==0)
                return true;
            else 
                return false;
        }
        
        
    }
};