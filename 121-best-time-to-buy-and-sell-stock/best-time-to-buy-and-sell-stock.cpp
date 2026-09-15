class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0;
        int minprice=prices[0];
        for(int i=0;i<n;i++)
        {
            minprice=min(prices[i],minprice);
            ans=max(prices[i]-minprice,ans);
        }
        return ans;
    }
};