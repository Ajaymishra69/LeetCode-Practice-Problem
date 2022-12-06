class Solution {
public:
    int getKth(int lo, int hi, int k) {
        multimap<int,int>mp;
        int ans;
        for(int i=lo;i<=hi;i++)
        {
            int cnt =0;
            int x=i;
            while(x!=1)
            {
                if(x%2==0)
                {
                    x=x/2;
                    cnt++;
                }
                else
                {
                    x=x*3+1;
                    cnt++;
                }
            }
            mp.insert(pair<int, int>(cnt, i));
        }
        for(auto i: mp)
        {
          // cout<<i.first<<" "<<i.second<<endl;
            k--;
            if(k==0)
            {
                ans=i.second;
                break;
            }
           
        }
        return ans;
    }
};