class Solution {
public:
   vector<vector<int>> fourSum(vector<int>& nums, int target) {

    int n = nums.size();
    set<vector<int>> st;

    for(int i = 0; i < n; i++) {

        for(int j = i + 1; j < n; j++) {

            unordered_set<long long> hash;

            for(int k = j + 1; k < n; k++) {

                long long need =
                    (long long)target
                    - nums[i]
                    - nums[j]
                    - nums[k];

                if(hash.find(need) != hash.end()) {

                    vector<int> temp = {
                        nums[i], nums[j],
                        (int)need, nums[k]
                    };

                    sort(temp.begin(), temp.end());

                    st.insert(temp);
                }

                hash.insert(nums[k]);
            }
        }
    }

    return vector<vector<int>>(st.begin(), st.end());
}
};