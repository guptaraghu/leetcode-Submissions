//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N)
        {
            return -1;
        }
          int low = *max_element(A,A+N);
      //  int n= sizeof(A) / sizeof(int);
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum = sum + A[i];
        }
        int high=sum;
        int ans=sum;
       //cout<<low<<" "<<high<<endl;
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(is_possible(mid, A,M,N))
            {
                if(mid<ans)
                {
                    ans=mid;
                   
                }
                 high=mid-1;
                

            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    
        //code here
    }
     bool is_possible(int mid,int A[],int M,int N)
    {
        int count = 1 ;
        int sum=0;
        int temp =mid;
        for(int i=0;i<N;i++)
        {
          if(sum+A[i]<=mid)
          {
              sum=sum+A[i];
          }
          else
          {
              sum=A[i];
              count++;
              
          }
        }
        //cout<<count<<endl;
        if(count<=M)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends