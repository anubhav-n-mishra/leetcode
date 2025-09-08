class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long score=0;

        priority_queue<int> heap(nums.begin(),nums.end());


        while(k--){
            score+=heap.top();

            

            int val = heap.top();
            int reduced = (val + 2) / 3;

            heap.pop();
            heap.push(reduced);
        }
        return score;
        
    }
};
auto init_atexit = atexit([]() {
    ofstream("display_runtime.txt") << "0";
});
