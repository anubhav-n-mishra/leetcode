class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<long long> pq;
        for (int x : nums) pq.push(x);  
        long long score = 0;
        while (k--) {
            long long val = pq.top();
            pq.pop();
            score += val;
            long long nextVal = (val + 2) / 3; // ceil(val / 3)
            pq.push(nextVal);
        }
        return score;
    }
};
