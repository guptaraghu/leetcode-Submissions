class Solution {
public:
    int mySqrt(int x) {
        long long int start=0;
        long long int end = x;
        long long int mid;
        mid=(start+end)/2;
        int ans;
        while(start<=end)
        {
            if(mid*mid==x)
            {
                return mid;
            }
            if(mid*mid>x)
            {
                end=mid-1;
            }
            if(mid*mid<x)
            {
                start=mid+1;
            }
            mid=(start+end)/2;
        }
        return mid;
        
    }
};