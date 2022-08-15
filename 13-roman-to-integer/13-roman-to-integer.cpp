class Solution {
public:
    int romanToInt(string s) {
        int  value=0;
        map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        for(int i=0;i<s.size();i++)
        {
           if(m[s[i]]<m[s[i+1]])
           {
               value=value-m[s[i]];
           }
            else
                value=value+m[s[i]];
        }
        return value;
    }
};