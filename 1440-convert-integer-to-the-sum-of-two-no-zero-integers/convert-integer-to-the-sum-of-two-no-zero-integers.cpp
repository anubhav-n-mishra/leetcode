class Solution {
public:
     bool kyazeroh(int x){
        while(x>0){
            if(x%10 == 0) return true;
            x=x/10;
        }
        return false;
     }
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1 ; i<n;i++){
            int j = n-i;
            if(!kyazeroh(i) && !kyazeroh(j)){
                return {i,j};
            }
        }
        return {};
    }
};