class Solution {
public:
    vector<string> cellsInRange(string s) {
        // string(1,char) this func converts char into string
        vector<string>ans;
        char startrow = s[0];
        char endrow = s[3];
        char startcol = s[1];
        char endcol = s[4];
        if(startcol == endcol)
        {
            for(char i = startrow;i<=endrow;i++){
                string temp = string(1,i)+string(1,startcol);
                ans.push_back(temp);
            }
        }
        else
        {
            for(char i = startrow;i<=endrow;i++){
                for(char j = startcol;j<=endcol;j++){
                   string str = string(1,i) + string(1,j); 
                    ans.push_back(str);
                }
            }
        }
        return ans;
    }
};