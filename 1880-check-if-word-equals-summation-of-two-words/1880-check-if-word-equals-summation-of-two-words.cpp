class Solution {
public:
    bool isSumEqual(string fw, string sw, string tw) {
       int n1=fw.size();
        int n2=sw.size();
         int n3=tw.size();
       int sum=0;
       int trget=0;
       string s1,s2,s3;
    if(n1==n2&&n2==n3){
       for(int i=0;i<n1;i++){
            int t1=(int)fw[i]-97;
            s1+=to_string(t1);
           int t2=(int)sw[i]-97;
            s2+=to_string(t2);
            int t3=(int)tw[i]-97;
            s3+=to_string(t3);
       }}
       else{
           for(int i=0;i<n1;i++){
            int t1=(int)fw[i]-97;
            s1+=to_string(t1);}

            for(int i=0;i<n2;i++){
            int t1=(int)sw[i]-97;
            s2+=to_string(t1);}

            for(int i=0;i<n3;i++){
            int t1=(int)tw[i]-97;
            s3+=to_string(t1);}

       }
       if(stoi(s1)+stoi(s2)==stoi(s3))
            return true;
        return false;
    }
};