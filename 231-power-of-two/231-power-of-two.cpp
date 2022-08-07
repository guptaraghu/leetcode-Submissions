class Solution {
public:
    bool isPowerOfTwo(int m) { 
        if(m==1)
            return true;
        if(m%2!=0 || m<=0)
            return false;
        
        int c=0;
        while(m>1)
        {
            m=m/2;
            if(m%2!=0 && m>1)
            {
                c=1;
                break;
            }
        }

        if(c==0)
        return true;
        else
            return false;
        }
};