class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev;
        vector<int>arr;
        istringstream ss(s);
        string str;
        while(ss>>str){
            int n=str.size();
            if((n==1 && isdigit(str[0])!=0) || (n==2 && isdigit(str[0])!=0 &&isdigit(str[1])!=0)){
                int temp=stoi(str);
                arr.push_back(temp);
            }
            str.pop_back();
        }
        // for(auto i:arr)
        //     cout<<i<<endl;
        for(int i=0;i<arr.size()-1;i++)
            if(arr[i]>=arr[i+1])
                return false;
        return true;
    }
};