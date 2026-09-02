class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int n= max(s1.size(),s2.size());
        string str ="";

        for(int i=0 ; i<n ;i++)
       {

        if(i<s1.size())
        {
           str += s1[i];
        }
       if(i<s2.size())
       {
          str += s2[i];
       }
        
       }
       return str;
    }
};