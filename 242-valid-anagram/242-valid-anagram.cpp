class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        else
        {
        int hash1[26];
        int hash2[26];
        int c=0;
        for(int i=0;i<26;i++)
        {
            hash1[i]=0;
            hash2[i]=0;
        }
        for(int i=0;i<s.size();i++)
            hash1[int(s[i])-97]=hash1[int(s[i])-97]+1;
          for(int i=0;i<t.size();i++)
            hash2[int(t[i])-97]=hash2[int(t[i])-97]+1;
        
        for(int i=0;i<t.size();i++)
        {
            int x;
           x=int(t[i])-97;
            if(hash1[x]==hash2[x])
               c=c+1;
        }
        if(c==t.size())
            return true;
        else
            return false;
        } 
    }
};