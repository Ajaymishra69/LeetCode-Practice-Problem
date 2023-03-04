class Solution {
public:
    string reverseVowels(string s) {
        int e = s.size()-1;
        int si = 0;
        while(si<e){
            if((s[si]=='a'||s[si]=='e'||s[si]=='o'||s[si]=='u'||s[si]=='i'||
            s[si]=='A'||s[si]=='E'||s[si]=='I'||s[si]=='O'||s[si]=='U')&&
            (s[e]=='a'||s[e]=='e'||s[e]=='o'||s[e]=='u'||s[e]=='i'||
            s[e]=='A'||s[e]=='E'||s[e]=='I'||s[e]=='O'||s[e]=='U')){
                   swap(s[si],s[e]);
                   si++;
                   e--;   
                }
            else if(s[si]=='a'||s[si]=='e'||s[si]=='o'||s[si]=='u'||s[si]=='i'||
                 s[si]=='A'||s[si]=='E'||s[si]=='I'||s[si]=='O'||s[si]=='U')
                 e--;
            else if(s[e]=='a'||s[e]=='e'||s[e]=='o'||s[e]=='u'||s[e]=='i'||
                 s[e]=='A'||s[e]=='E'||s[e]=='I'||s[e]=='O'||s[e]=='U')
                 si++;
            else{
                si++;
                e--;
            }
        }
        return s;
    }
};