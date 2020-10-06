class Solution {
public:
    int lastStoneWeight(vector<int>& a) {
        int a1,a2;
        priority_queue<int>pq{a.begin(),a.end()};
        
        while(pq.size()>1){
            a1=pq.top(); pq.pop();
            a2=pq.top(); pq.pop();
            if(abs(a1-a2)>0)  pq.push(a1-a2);
        }
        return pq.empty()?0:pq.top();
    }
};
