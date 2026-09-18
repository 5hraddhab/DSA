class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        int n = nums.size();

        if(n == 0)
            return 0;

        sort(nums.begin(), nums.end());

        int count = 1;
        int maxcount = 1;

        for(int i = 1; i < n; i++) {

            // Consecutive
            if(nums[i] == nums[i-1] + 1) {
                count++;
            }

            // Duplicate → ignore
            else if(nums[i] == nums[i-1]) {
                continue;
            }

            // Sequence broken
            else {
                count = 1;
            }

            maxcount = max(maxcount, count);
        }

        return maxcount;
    }
};