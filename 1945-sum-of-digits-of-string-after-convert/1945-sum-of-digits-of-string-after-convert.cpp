class Solution {
public:
    int getLucky(string s, int k) {
        int x=0;;
        for(int i=0;i<s.size();i++){
            int val = s[i]-'a'+1;
            if(val<10)
                x+=val;
            else
                x+=val%10 + val/10;
        }
        // cout<<ans;
        //  long long x=12552031545;//=stoi(ans);
        while(k>1){
             int sum=0;
            while(x>0){
                sum+=x%10;
                x=x/10;
            }
            x=sum;
            k--;
        }
        return x;
    }
};