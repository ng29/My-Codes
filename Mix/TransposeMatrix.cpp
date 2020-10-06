class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& a) {
        
        int r=a.size();
        int c=a[0].size();
       vector<vector<int>>ans(c,vector<int>(r));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[j][i]=a[i][j];
            }
        }return ans;
    }
};
