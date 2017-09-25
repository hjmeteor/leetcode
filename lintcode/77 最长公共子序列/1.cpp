class Solution {
public:
    /*
     * @param A: A string
     * @param B: A string
     * @return: The length of longest common subsequence of A and B
     */
    int longestCommonSubsequence(string &A, string &B) {
        // write your code here
        int alen = A.length();
        int blen = B.length();
        if(alen == 0 || blen == 0){
            return 0;
        }
        vector<vector<int>> dp(alen + 1, vector<int>(blen + 1, 0));
        for(int i = 1; i <= alen; i++){
            for(int j = 1; j <= blen; j++){
                if(A[i - 1] == B[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else{
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        return dp[alen][blen];   
    }
};