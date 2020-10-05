class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int lj,ls,ans=0;
        lj=J.length();
        ls=S.length();
        map<char,int>m;
        
        for(auto i :S)
            m[i]++;
        
        for(auto i:m){
            for(int j=0;j<lj;j++){
                if(i.first==J[j])   ans+=i.second;
            }
        }
        return ans;
    }
};
