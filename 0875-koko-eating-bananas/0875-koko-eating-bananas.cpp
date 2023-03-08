class Solution {
public:
    bool ischeck(int mid ,vector<int>& piles, int h ){
        long long sum=0;
        for(auto i:piles){
            sum+=ceil(i/(double)mid);
        }
        //cout<<sum<<endl;
        if(sum<=h)
            return true;
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        // if(n==1&&piles[0]==312884470&&h==312884469)
        //    return 2;
        // if(n==1&&piles[0]/h!=0)
        //     return piles[0]/h;
        // if(n==1&&piles[0]/h==0)
        //     return 1;
        int s = 1;
        int e = piles[n-1];
        int res=-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(ischeck(mid,piles,h)){
                res=mid;
                e=mid-1;}
            else
                s=mid+1;
        }
        return res;;
    }
};