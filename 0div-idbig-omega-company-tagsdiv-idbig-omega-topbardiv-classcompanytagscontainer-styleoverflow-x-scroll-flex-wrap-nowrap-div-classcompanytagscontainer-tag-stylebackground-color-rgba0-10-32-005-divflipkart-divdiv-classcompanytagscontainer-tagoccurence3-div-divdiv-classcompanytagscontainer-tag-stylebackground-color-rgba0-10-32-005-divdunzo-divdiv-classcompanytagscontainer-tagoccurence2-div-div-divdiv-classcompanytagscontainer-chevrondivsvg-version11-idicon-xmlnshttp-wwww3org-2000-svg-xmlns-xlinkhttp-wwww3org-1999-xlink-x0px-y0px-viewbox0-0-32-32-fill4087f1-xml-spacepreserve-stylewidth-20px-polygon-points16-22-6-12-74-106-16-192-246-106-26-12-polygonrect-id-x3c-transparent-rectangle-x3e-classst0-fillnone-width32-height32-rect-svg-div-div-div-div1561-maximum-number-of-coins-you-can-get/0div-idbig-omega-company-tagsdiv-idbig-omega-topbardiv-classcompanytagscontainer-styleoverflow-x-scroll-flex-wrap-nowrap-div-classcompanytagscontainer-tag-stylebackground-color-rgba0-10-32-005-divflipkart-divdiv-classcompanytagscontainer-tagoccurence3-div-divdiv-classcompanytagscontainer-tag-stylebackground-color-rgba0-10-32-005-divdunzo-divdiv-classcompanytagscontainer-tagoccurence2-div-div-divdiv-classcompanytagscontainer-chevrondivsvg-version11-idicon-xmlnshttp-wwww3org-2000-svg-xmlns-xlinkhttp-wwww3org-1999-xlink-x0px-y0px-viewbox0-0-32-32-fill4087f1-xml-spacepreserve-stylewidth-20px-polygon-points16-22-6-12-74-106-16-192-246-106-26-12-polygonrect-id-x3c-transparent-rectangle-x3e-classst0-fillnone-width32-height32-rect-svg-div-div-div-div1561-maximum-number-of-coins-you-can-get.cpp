class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int maxi=0;
        int i=1;
        sort(piles.begin(),piles.end(),greater<int>());
        int n = piles.size()/3;
        while(n!=0){
            maxi+=piles[i];
            i+=2;
            n--;
        }
        return maxi;
    }
};