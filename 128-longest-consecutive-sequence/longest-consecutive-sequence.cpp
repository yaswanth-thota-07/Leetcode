class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        set <int> st;
        int n = nums.size();
        vector <int> v;
        for(int i = 0;i<n;i++){
            st.insert(nums[i]);
        }
        for(int x : st){
            v.push_back(x);
        }
        int count = 1;
        int maxt = INT_MIN;
        for(int i = 1;i<v.size();i++){
            if(v[i]-v[i-1]==1){
                count++;
            }
            else{
                maxt = max(maxt,count);
                count = 1;
            }
        }
         maxt = max(maxt,count);
        return maxt;
    }
};