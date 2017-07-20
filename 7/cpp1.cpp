class Solution {
public:
    int reverse(int x) {
        long int result = 0;
        int flag = 0;
        if(x < 0){
            x = -x;
            flag = 1;
        }
        while(x > 0){
            result = result * 10 + x % 10;
            x = x / 10;
        }
        if(result > 2147483647 || result < -2147483648){
            return 0;
        }
        result = int(result);
        if(flag == 1){
            return -result;
        }
        else{
            return result;
        }
    }
};