// class Solution {
// public:
//     int sumSubarrayMins(vector<int>& arr) {
//         long ans=0;
//         int mod=1e9+7;
//         int n = arr.size();
//         int min = INT_MAX;
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]<min)
//                 min=arr[i];
//         }
//         ans+=min;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<i;j++)
//             {
                
//             }
//         }
//     }
// };



// class Solution
// {     int mod = 1e9 + 7;
//     public:
//         int sumSubarrayMins(vector<int> &arr)
//         {


// //            	// Brute Force O(N*3)
// //            	            long long sum = 0;

// //            	            for (int i = 0; i < arr.size(); i++)
// //            	            {

// //            	                for (int j = i; j < arr.size(); j++)
// //            	                {
// //            	                    int mini = INT_MAX;
// //            	                    for (int k = i; k <= j; k++)
// //            	                    {
// //            	                        mini = min(mini, arr[k]);
// //            	                    }
// //            	                    sum += mini;
// //            	                }
// //            	            }

// //            	            return sum;
// //         }
// // };





//            	            long  long int sum=0;
//            	            long long int mini=INT_MAX;
//            	            for(int i=0;i < arr.size();i++)
//            	            {
//            	                mini=arr[i];
//            	                sum+=mini;

//            	                for(int j=i+1;j < arr.size();j++)
//            	                {
//            	                    mini=min(mini,arr[j]);
//            	                    sum+=mini;
//            	                }

//            	            }

//            	            return (sum%mod);
//         }
// };

// #define min(a, b)(a < b ? a : b)
// class Solution
// {
//     int mod = 1e9 + 7;
//     public:
//         int sumSubarrayMins(vector<int> &arr)
//             {
//            	            long  long int sum=0;
//            	            long long int mini=INT_MAX;
//            	            for(int i=0;i < arr.size();i++)
//            	            {
//            	                mini=arr[i];
//            	                sum+=mini;

//            	                for(int j=i+1;j < arr.size();j++)
//            	                {
//            	                    mini=min(mini,arr[j]);
//            	                    sum+=mini;
//            	                }

//            	            }

//            	            return (sum%mod);
//         }
// };
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size(), mod = 1e9 + 7;
        long sum = 0;
        stack<pair<int, long>> sums;
        for(int i = n - 1; i >= 0; i--) {
            while(!sums.empty() && arr[i] <= arr[sums.top().first]) 
                sums.pop();
            if(sums.empty()) 
                sums.push({i, (arr[i] * (n - i))%mod});
            else 
                sums.push({i, (sums.top().second + arr[i] * (sums.top().first - i))%mod});
            sum = (sum + sums.top().second)%mod;
        }
        return sum%mod;
    }
};






























