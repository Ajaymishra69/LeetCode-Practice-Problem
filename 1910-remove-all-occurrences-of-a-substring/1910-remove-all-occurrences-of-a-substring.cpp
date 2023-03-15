class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = part.size();
        while(s.find(part)!=-1){
            int temp = s.find(part);
            s.erase(temp,n);
        }
        return s;
    }
};