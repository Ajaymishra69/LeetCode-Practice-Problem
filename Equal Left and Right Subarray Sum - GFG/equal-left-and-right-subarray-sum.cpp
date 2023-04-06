//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    int equalSum(int n, vector<int> &a) {
        vector<int>psum,ssum;
        int ps=0,ss=0,ans=-1;
        for(int i=0,j=n-1;i<n&&j>=0;i++,j--){
            ps+=a[i];
            ss+=a[j];
            psum.push_back(ps);
            ssum.push_back(ss);
        }
        reverse(ssum.begin(),ssum.end());
        // for(auto i:psum)cout<<i<<" ";
        // cout<<endl;
        // for(auto i:ssum)cout<<i<<" ";
        // cout<<endl;
        for(int i =0;i<psum.size();i++){
            if(psum[i]==ssum[i])
                ans=i;
        }
        if(ans!=-1)
            return ans+1;
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N; 
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        int res = obj.equalSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends