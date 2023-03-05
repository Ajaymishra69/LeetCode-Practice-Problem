class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<char,string>mp;
        set<string>s;
        char a[26];
        int x=0;
        vector<string>temp={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0;i<26;i++){
            a[i]=97+x;
            x++;
        }
        for(int i=0;i<26;i++){
            mp[a[i]]=temp[i];
        }
        for(auto i:words){
            string temp="";
            string str=i;
            for(int j=0;j<str.size();j++){
                temp+=mp[str[j]];
            }
            s.insert(temp);
        }
            return s.size();
    }
};