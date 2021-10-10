class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        
        sort(nums.begin(),nums.end());
        int s=nums.size();
        
        for(int i=0;i<s;i++){
            if (i > 0 and nums[i] == nums[i-1]) continue;
            int beg=i+1,end=s-1;
            
            while(beg<end){
                int curSum=nums[i]+nums[beg]+nums[end];
                if(curSum==0){
                    ans.push_back({nums[i],nums[beg],nums[end]});
                    int prevLeft=nums[beg],prevRight=nums[end];
                    while(beg<end && nums[beg]==prevLeft) beg++;
                    while(beg<end && nums[end]==prevRight) end--;
                }else if(curSum>0){
                    end--;
                }else
                    beg++;
            }
        }return ans;
        
        
    }
};
