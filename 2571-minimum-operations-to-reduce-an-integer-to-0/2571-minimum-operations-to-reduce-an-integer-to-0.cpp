class Solution {
public:
    int Fmin(vector<int>&arr,int i)
    {
        int mini=INT_MAX;
        vector<int>temp;
        int temp1;
        for(int j =0;j<=17;j++){
            temp.push_back(abs(arr[j]-i));
            if(temp[j]<mini)
            {
                mini=temp[j];
                temp1=arr[j];
            }
        }
        
        return temp1;
    }
    int minOperations(int n) {
        vector<int>arr;int cnt=0;
        for(int i=0;i<=17;i++)
        {
            arr.push_back(pow(2,i));
        }
        while(n!=0){
             n= abs(n-Fmin(arr,n));
            cnt++;
        }
        return cnt;
    }
};