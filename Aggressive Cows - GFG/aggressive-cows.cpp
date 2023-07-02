//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

    int solve(int n, int k, vector<int> &stalls) {
        sort(stalls.begin(),stalls.end());
         int low = 1;
         int high= stalls[n-1]-stalls[0];
        int ans=0;
        while(low<=high)
        {
            int mid=(low + high)/2;
           if( is_possible(k,mid,stalls))
           {
              //cout<< stalls[mid]<<endl;
               if(mid>=ans)
               {
                   ans=mid;
               }
               low=mid+1;
           }
        else
        {
            high=mid-1;
        }
    }
    return ans;
    }
    bool is_possible(int k,int mid, vector<int>&stalls)
    {
        int cow=1;
        int m= stalls[0];
        int p= stalls.size();
        for(int i=1;i<p;i++)
        { 
         
            if(stalls[i]-m>=mid)
            {
                cow++;
                m=stalls[i];
                if(cow==k)
                {
                    return true;
                }
            }
        }
            return false;
    }
    
    
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends