class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        for(auto i:nums1)
            temp.push_back(i);
        for(auto i:nums2)
            temp.push_back(i);
        sort(temp.begin(),temp.end());
        double ans;
        int n = temp.size();
        int m = n/2;
        if(n%2!=0)
            ans=temp[m];
        else
            ans=(double)(temp[m]+temp[m-1])/2;
        return ans;
            
    }
};