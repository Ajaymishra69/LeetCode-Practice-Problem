//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  vector<int> makeBeautiful(vector<int> arr) {
        stack<int> s;
        int n = arr.size();
        
        for(int i=0; i<n; i++) {
            if( !s.empty() ) {
                if( s.top() < 0 and arr[i] < 0 or s.top() >= 0 and arr[i] >= 0 )
                    s.push( arr[i] );
                else
                    s.pop();
            }
            else
                s.push( arr[i] );
        }
        
        // using the same arr
        n = s.size();
        arr.clear();
        arr.resize(n, 0);
        
        // inserting the element from last position
        for(int i=0; i<n; ++i) {
            arr[n-1-i] = s.top();
            s.pop();
        }
        
        return arr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends