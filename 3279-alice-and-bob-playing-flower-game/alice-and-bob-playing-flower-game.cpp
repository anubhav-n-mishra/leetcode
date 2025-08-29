class Solution {
public:
    long long flowerGame(int n, int m) {
        long long oddN = 0, evenN = 0;
        long long oddM = 0, evenM = 0;

        int i = 1;
        while (i <= n) {
            if (i % 2 == 0) evenN++;
            else oddN++;
            i++;
        }

        int j = 1;
        while (j <= m) {
            if (j % 2 == 0) evenM++;
            else oddM++;
            j++;
        }

        return oddN * evenM + evenN * oddM;
    }
};
