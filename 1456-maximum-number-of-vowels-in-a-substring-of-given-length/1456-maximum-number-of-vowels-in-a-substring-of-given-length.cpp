class Solution {
public:
    int maxVowels(string s, int k) {
        int cntvowels=0;
        int n = s.size();
        int maxi = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                cntvowels++;
            if(i-k>=0){
                if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u')
                    cntvowels--;
            }
            if(cntvowels>maxi)
                maxi=cntvowels;
        }
        return maxi;
    }
};


















































////////////////// Brute Force (102/106)///////////////////////////////////////
// class Solution {
// public:
//     int cntvowel(string temp){
//         int cnt=0;
//         for(int i=0;i<temp.size();i++){
//             if(temp[i]=='a'||temp[i]=='u'||temp[i]=='o'||temp[i]=='i'||temp[i]=='e')
//                 cnt++;
//         }
//         return cnt;
//     }
//     int maxVowels(string s, int k) {
//         int maxi=-1;
//         int n = s.size();
//         for(int i=0;i<=n-k;i++){
//             string temp = s.substr(i,k);
//             // cout<<temp<<endl;
//             int x = cntvowel(temp);
//             maxi=max(maxi,x);
//         }
//         return maxi;
//     }
// };