class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        if(num.size()==k)return "0";
        for(int i=0;i<num.size();i++){
            while(ans.back()>num[i]&&k&&ans!=""){
                ans.pop_back();
                k--;
            }
            ans+=num[i];
        }
        while(k--){
            ans.pop_back();
        }
        num="";
        int i=0;
        while(ans[i]=='0')i++;
        while(i<ans.size())num+=ans[i++];
        if(num=="")return "0";
        return num;
    }
};