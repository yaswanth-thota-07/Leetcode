class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> st;
        for(int i = 0;i<n;i++){
            st.insert(nums[i]);
        }
        unordered_map <int,int> mp;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<int> v;
        for(int x : st){
            if(mp[x]>=k){
                for(int i = 0;i<k;i++){
                    v.push_back(x);
                }
            }
            else{
                for(int i = 0;i<mp[x];i++){
                    v.push_back(x);
                }
            }

        }
        sort(v.begin(),v.end());
        return v;
    }
};