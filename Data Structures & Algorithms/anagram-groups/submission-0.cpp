class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>> ans;

        unordered_map<string , vector<string>>mp;

        for(int i=0;i<str.size() ;i++)
        {
            string temp =str[i];
            sort(begin(temp) , end(temp));

           mp[temp].push_back(str[i]);
        }
       for(auto x: mp )
       {
         ans.push_back(x.second);
       }
        return ans;
    }
};
