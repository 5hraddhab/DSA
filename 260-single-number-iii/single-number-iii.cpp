class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        for(int i=0;i<n;i++)
        {
            xr^=nums[i]; 
        }
       unsigned int bit = (unsigned int)xr & -(unsigned int)xr;
        int a=0;
        int b=0;
        for(int i=0;i<n;i++)
        {
           if(nums[i] &bit)
           {
            a^=nums[i];
           }
           else
           {
          b^=nums[i];
           }
        }
        return {a,b};
    }
};