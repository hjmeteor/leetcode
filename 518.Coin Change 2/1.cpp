class Solution {
public:
    int change(int amount, vector<int>& coins) {
        if(amount == 0)
            return 1;
        if(coins.size() == 0)
            return 0;
        vector<int> sum(amount + 1, 0);
        sum[0] = 1;
        for(int i = 0; i < coins.size(); ++ i){
            for(int j = coins[i]; j <= amount; ++ j){
                sum[j] += sum[j - coins[i]];
            }
        }
        return sum[amount];
    }
};