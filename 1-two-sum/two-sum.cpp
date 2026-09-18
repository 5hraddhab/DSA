class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>r;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
             r.push_back({nums[i],i});
        }
        sort(r.begin(),r.end());
        int left=0;
        int right=n-1;
        while(left<right)
        {
            if(r[left].first+r[right].first==target)
            {
                return {r[left].second,r[right].second};
            }
            else if(r[left].first+r[right].first>target)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
        return {0,0};
    }
};