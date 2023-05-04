class Solution {
public:
    string predictPartyVictory(string sen) {
        int i,r,d,n=sen.size();
        queue<int> q1,q2;
        
        for(i=0;i<n;i++)
        {
            if(sen[i]=='R')
             q1.push(i);
            else
            q2.push(i);
        }
        
        while(!q1.empty()&&!q2.empty())
        { r=q1.front();
          d=q2.front();
          q1.pop();  q2.pop();

          if(r<d)
            q1.push(r+n);
          else
            q2.push(d+n);
        }

        if(q1.size()>q2.size())
         return "Radiant";
       return "Dire";
    }
};