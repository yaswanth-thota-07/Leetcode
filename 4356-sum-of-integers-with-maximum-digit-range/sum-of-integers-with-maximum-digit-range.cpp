class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int n = nums.size();
        int maxt = INT_MIN;
        int mint = INT_MAX;
        int maxt1 = INT_MIN;
        unordered_map <int,int> mp;
        for(int i = 0;i<n;i++){
            int no = nums[i];
            int temp = no;
             maxt = INT_MIN;
             mint = INT_MAX;
             int digit;
            while(temp>0){
                digit = temp%10;
                maxt = max(maxt,digit);
                mint = min(mint,digit);
                temp = temp/10;
            }
            mp[nums[i]] = maxt-mint;
            maxt1 = max(maxt1,maxt-mint);
        }
        int sum = 0;
        for(int i = 0;i<n;i++){
            if(mp[nums[i]]==maxt1){
                sum  = sum + nums[i];
            }
        }
        return sum;
    }
};