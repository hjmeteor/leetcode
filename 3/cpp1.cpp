class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr(256, -1);
        int star = -1;
        int result = 0;
        for(int i = 0; i < s.length(); i++){
            if(arr[s[i]] > star){
                star = arr[s[i]];
            }
            arr[s[i]] = i;
            result = max(result, i - star);
        }
        return result;
    }
};
