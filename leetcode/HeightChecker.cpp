class Solution {
public:
    int heightChecker(vector<int>& h) {
        int ans=0;
        vector<int>a=h;
        sort(a.begin(),a.end());
        for(int i=0;i<h.size();i++){
            if(a[i]!=h[i])  ans++;
        }return ans;
    }
};
