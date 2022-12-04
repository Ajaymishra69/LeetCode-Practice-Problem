// class Solution {
// public:
//     int minimumAverageDifference(vector<int>& nums) {
//         int n = nums.size();
//         if(n==1)
//             return 0;
//         vector<int> v1;
//         long long int sum1=0,sum=0,ans;
//        vector<pair<long long int,long long int>>min;
//         int j=0;
//         for(int i=0;i<n;i++)
//         {
//             sum+=nums[i];
            
//         }
//         for(int i=0;i<n;i++)
//         {
//           sum1+=nums[i];
//           sum-=nums[i];
//           if(n-1-i==0)
//           {
//               j=1;
//           }
//             ans=abs(sum1/(i+1)-sum/(n-1-i-j));
//             min.push_back(make_pair(ans,i));
//         }
//         sort(min.begin(),min.end());
//         if(min.size()==1)
//             return 0;
//         return min[0].second;
//     }
// };
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long i, n=nums.size(),sum1=0,sum2=0,minn=INT_MAX,avg,j;
         
        for(i=0;i<n;i++)
        {
            sum1+=nums[i];
        }
        cout<<sum1<<" "<<endl;
        for(i=0;i<n;i++)
        { sum2+=nums[i];
          sum1-=nums[i];
          if(i==n-1)
          avg=sum2/n;
          else
          avg=abs((sum2/(i+1))-(sum1/(n-1-i)));
          if(minn>avg)
          {
              minn=avg;
              j=i;
          }
        
        }
        return j;
    }
};