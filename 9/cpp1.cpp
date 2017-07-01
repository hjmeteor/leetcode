class Solution {
public:
    bool isPalindrome(int x) {
        int result = 0;
        if(x < 0 || (x != 0 && x % 10 == 0)){
            return false;
        }
        while(x > result){
            result = x % 10 + result * 10;
            x = x / 10;
        }
        return (x == result || x == result / 10);
    }
};
