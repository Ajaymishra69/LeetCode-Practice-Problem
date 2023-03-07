class Solution {
public:
    bool ischeck(long long n,vector<int>& time,int tt){
        long long sum=0;
        for(auto i:time)
            sum+=n/i;
        if(sum>=tt)
            return true;
        return false;
    }
//***********dryRun*************************//
//     time=[1,2,3],tt=5,s=1,e=15
//         1st iter: mid=8,sum= 8/1 + 8/2 + 8/3 = 14
//         2nd iter: s=1,e=7,mid=4,sum= 4/1 + 4/2 + 4/3 = 7
//         3rd iter: s=1,e=3,mid=2,sum= 2/1 + 2/2 + 2/3 = 3
//         4th iter: s=3,e=3,mid=3,sum= 3/3 + 3/2 + 3/3 = 5 return mid
            
//     time=[5,10,10],tt=9,s=5,e=10*9 = 90
//             1st iter: mid=47,sum= 47/5 + 47/10 + 47/10 = 17
//             2nd iter: s=5,e=46,mid=25,sum= 25/5 + 25/10 + 25/10 = 9 return mid;
//*******************************************//
    long long minimumTime(vector<int>& time, int tt) {
        sort(time.begin(),time.end());
        long long s=time[0];        //min itna time lagega ek trip complete krne me
        long long e=1e14;   //max to max itna time lg skta h toh ans s<=ans<=e hoga
         if(tt==1)
            return s;
        while(s<e){
            long long mid = s+(e-s)/2;
            if(ischeck(mid,time,tt))
                e=mid;
            else
                s=mid+1;
        }
        return s;
    }
};