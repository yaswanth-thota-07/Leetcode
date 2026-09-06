class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();  
        long long sum1 = 0;
        long long sum2 = 0;
        for(int i = 0;i<n/2;i++){
            sum1 = sum1+ nums[i];
        }
         for(int i = n/2;i<n;i++){
            sum2 = sum2+ nums[i];
        }
        int lp = 0;
        int hp = n/2;
        int count1 = 0;
        int count2 = 0;
        if(sum1>sum2){count1++;}
        if(sum1<sum2){count2++;}

        for(int i = 0;i<n/2-1;i++){
           sum1 =  sum1-nums[lp]+nums[hp];
           sum2 =  sum2-nums[hp]+nums[lp]; 
            lp++;
            hp++;
           if(sum1>sum2){
            count1++;
           } 
           if(sum2>sum1){
            count2++;
           }
        }
        return count1+count2;
    }
};