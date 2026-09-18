class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

        int n = grid.size();
        int total = n * n;

        int xr = 0;

        // XOR all grid elements
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                xr ^= grid[i][j];
            }
        }

        // XOR numbers from 1 to n²
        for (int i = 1; i <= total; i++) {
            xr ^= i;
        }

        // Rightmost set bit
        int bit = xr & (-xr);

        int a = 0;
        int b = 0;

        // Divide grid elements into two groups
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] & bit)
                    a ^= grid[i][j];
                else
                    b ^= grid[i][j];
            }
        }

        // Divide 1 to n² into two groups
        for (int i = 1; i <= total; i++) {

            if (i & bit)
                a ^= i;
            else
                b ^= i;
        }

        // Determine which is repeated and which is missing
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (grid[i][j] == a)
                    return {a, b};

                if (grid[i][j] == b)
                    return {b, a};
            }
        }

        return {};
    }
};