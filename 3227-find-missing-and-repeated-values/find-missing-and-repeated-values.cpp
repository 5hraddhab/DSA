class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
          long long num = grid.size();
          long long n=num*num;
        long long actualSum = 0;
        long long actualSquareSum = 0;

       for(int i=0;i<num;i++)
       {
        for(int j=0;j<num;j++)
        {
            actualSum+=grid[i][j];
            actualSquareSum+=(grid[i][j]*grid[i][j]);
        }
       }

        long long expectedSum = n * (n + 1) / 2;
        long long expectedSquareSum = n * (n + 1) * (2 * n + 1) / 6;

        long long diff1 = actualSum - expectedSum;
        long long diff2 = actualSquareSum - expectedSquareSum;

        // R - M = diff1
        // R + M = diff2 / diff1

        long long sum = diff2 / diff1;

        long long repeated = (diff1 + sum) / 2;
        long long missing = repeated - diff1;

        return {(int)repeated, (int)missing};
    }
};