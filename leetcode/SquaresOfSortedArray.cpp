class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        vector<int>ans(a.size());
//         for(int i=0;i<a.size();i++){
//             a[i]=a[i]*a[i];
//         }
//         sort(a.begin(),a.end());
            
            int i=0;
            int j=a.size()-1;
            int k=a.size()-1;
            while(i<=j){
                if(abs(a[j])>abs(a[i])){
                    ans[k]=a[j]*a[j];
                    j--;
                }else{
                    ans[k]=a[i]*a[i];
                    i++;
                }k--;
            }
            return ans;
    }
};
