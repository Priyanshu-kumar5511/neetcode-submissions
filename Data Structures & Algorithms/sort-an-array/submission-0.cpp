class Solution {
public:
 int priority(vector<int>&arr , int st,int end)
    {
        int curr=st;
        for(int i=st ;i<end ;i++)
        {
            if(arr[i]<=arr[end] )
            {
                swap(arr[i],arr[curr]);
                curr++;
            }
        }
       
        swap(arr[curr], arr[end]);

        return curr;

    }

    void quicksort(vector<int>&arr , int st,int end)
    {
        if(st>=end)
        {
            return;
        }
        int povt = priority(arr,st,end);
        quicksort(arr,st,povt-1);
        quicksort(arr,povt+1,end);
    }

    vector<int> sortArray(vector<int>& nums) {
        vector<int>ans=nums;
     quicksort(ans,0,ans.size()-1);
     return ans;
    }
};