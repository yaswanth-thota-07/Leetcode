class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int count =0;
           unordered_set <int> st;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            st.insert(nums[i]);
            mp[nums[i]]++;
        }
        for(int x : st){
            if(mp[x]>1){
            count = count + (mp[x]*(mp[x]-1))/2;}
        }
        return count;
     
    }
};