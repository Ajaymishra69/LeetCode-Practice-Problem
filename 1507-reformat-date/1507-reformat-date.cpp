class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string,string>mp={{"Jan","01"}, {"Feb","02"}, {"Mar","03"}, {"Apr","04"}, {"May","05"}, {"Jun","06"}, {"Jul","07"}, {"Aug","08"},{ "Sep","09"}, {"Oct","10"}, {"Nov","11"},{ "Dec","12"}};
        string ans="";
        istringstream ss(date);
        string dd,mm,yy;
        ss>>dd,ss>>mm,ss>>yy;
        ans+=yy+"-"+mp[mm];
        if(dd.size()==4)
            ans+="-"+string(1,dd[0])+string(1,dd[1]);
        else
            ans+="-"+to_string(0)+string(1,dd[0]);
        return ans;
    }
};