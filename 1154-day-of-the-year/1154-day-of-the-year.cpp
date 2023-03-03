class Solution {
public:
    int dayOfYear(string d) {
        unordered_map<string,int>v;
        v.insert({"01",0});
        v.insert({"02",31});
        v.insert({"03",59});v.insert({"09",243});
        v.insert({"10",273});
        v.insert({"11",304});
        v.insert({"12",334});
        v.insert({"04",90});
        v.insert({"05",120});
        v.insert({"06",151});
        v.insert({"07",181});
        v.insert({"08",212});
   string dd=string(1,d[8])+string(1,d[9]);
   
    string mm=string(1,d[5])+string(1,d[6]);
    string yy=string(1,d[0])+string(1,d[1])+string(1,d[2])+string(1,d[3]);
    cout<<dd<<endl<<mm<<endl<<yy;
    int ans=(stoi(dd)+v[mm]);
    int x = stoi(yy);
    if((x%100!=0||x%400==0)&&x%4 == 0&&stoi(mm)>2)
        return ans+1;
    return ans;
}
};