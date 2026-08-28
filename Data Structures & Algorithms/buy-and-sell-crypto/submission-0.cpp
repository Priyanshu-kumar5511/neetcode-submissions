class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minin=prices[0];
        int maxy=0;

        for(int i=0;i<prices.size() ;i++)
        {
            minin = min(minin , prices[i]);

            if(minin<prices[i])
            {
                int val = prices[i] - minin;
                maxy = max(maxy, val);
            }
        }
        return maxy;
    }
};
