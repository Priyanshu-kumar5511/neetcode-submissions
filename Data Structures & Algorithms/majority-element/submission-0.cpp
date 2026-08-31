class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size() ;i++)
        {
            mp[nums[i]]++;

        }
        int maxy=INT_MIN;
        int maxval=0;
        for(auto x: mp)
        {
            if(x.second>maxy)
            {
              maxval = x.first;
              maxy= x.second;
            }
            
        }
        return maxval;
    }
};