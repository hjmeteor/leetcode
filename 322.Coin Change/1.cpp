#define INF 100000
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> sum(amount + 1, amount + 1);
        sum[0] = 0;
        int coinslen = coins.size();
        for(int i = 1; i <= amount; i++){
            for(int j = 0; j < coinslen; j++){
                if(i - coins[j] >= 0){
                    sum[i] = min(sum[i], sum[i - coins[j]] + 1);
                }
            }
        }
        return sum[amount] > amount ? -1 : sum[amount];
    }
};