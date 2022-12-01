class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1=0;
        int count2=0;
        int n = s.length();
        //cout<<n;
        int mid = n/2;
        for(int i =0;i<mid;i++)
        {
            if(s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='a'
               ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                count1++;
            }
        }
        for(int i=mid;i<n;i++)
        {
            if(s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='a'
               ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                count2++;
            }
        }
        if(count1==count2)
            return true;
        else
            return false;
    }
};