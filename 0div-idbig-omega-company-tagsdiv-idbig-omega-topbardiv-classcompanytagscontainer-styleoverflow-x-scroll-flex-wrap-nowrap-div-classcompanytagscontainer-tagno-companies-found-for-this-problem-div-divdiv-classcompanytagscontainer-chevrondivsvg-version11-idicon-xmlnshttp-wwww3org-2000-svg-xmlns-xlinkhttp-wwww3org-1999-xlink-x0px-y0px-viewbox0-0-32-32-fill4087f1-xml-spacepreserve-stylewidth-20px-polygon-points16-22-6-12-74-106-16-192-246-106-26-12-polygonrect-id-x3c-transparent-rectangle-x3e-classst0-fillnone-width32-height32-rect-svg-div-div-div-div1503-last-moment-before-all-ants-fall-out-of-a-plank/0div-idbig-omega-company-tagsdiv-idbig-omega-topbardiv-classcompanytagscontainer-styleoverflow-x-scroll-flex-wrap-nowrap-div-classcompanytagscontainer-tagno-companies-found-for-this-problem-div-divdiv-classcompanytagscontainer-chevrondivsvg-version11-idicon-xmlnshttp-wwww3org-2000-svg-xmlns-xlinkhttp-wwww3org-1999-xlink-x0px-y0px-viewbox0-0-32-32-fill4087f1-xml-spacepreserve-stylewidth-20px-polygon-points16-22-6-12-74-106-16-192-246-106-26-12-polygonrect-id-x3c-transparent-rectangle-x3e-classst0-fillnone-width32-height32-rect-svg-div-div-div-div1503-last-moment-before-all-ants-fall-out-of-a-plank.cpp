class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans=0;
        int minr=INT_MAX;
        int maxl=0;
        if(left.size()==n+1 || right.size()==n+1)
            return n;
        // sort(left.begin(),left.end());
        // sort(right.begin(),right.end());
        for(auto i:left)
           maxl = max(maxl,i);
        for(auto i:right)
            minr = min(minr,i);
        //int m = left.size();
        
        ans = max(n-minr,maxl);
        
       
        // for(int i=0;i<n+1;i++){
        //     if(left[i]==right[i]){
        //         ans+=left[i];
        //         cout<<ans<<endl;
        //         if(i+1<left.size())
        //         for(int j=i+1;j<left.size();j++)
        //                 left[j]-=ans;
        //         if(i+1<right.size())
        //          for(int j=i+1;j<right.size();j++)
        //                 right[j]+=ans;
        //     } 
        //     else
        //     {
        //         left[i]--,right[i]++;
        //     }
        //     if(right.size()==0 || left.size()==0)
        //         break;
        // }
        return ans;
    }
};