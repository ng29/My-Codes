class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& a) {
        vector<vector<int>>ans(a.size());
        int r=a.size(),c=a[0].size();
        
        for(int i=0;i<r;i++){
            for(int j=a[i].size()-1;j>=0;j--){
                ans[i].push_back(!a[i][j]);
            }
        }
        
       return ans;
    }
};
