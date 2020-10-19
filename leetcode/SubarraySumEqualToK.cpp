class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> hashtable;
        int n = nums.size();
        int cur_prefix = 0;
        int answer = 0;
        hashtable[0] = 1;
        for(int i = 0; i < n; i++){
            cur_prefix += nums[i];
            if(hashtable.count(cur_prefix - k))
                answer += hashtable[cur_prefix - k];
            hashtable[cur_prefix]++;
        }
        return answer;
    }
};
