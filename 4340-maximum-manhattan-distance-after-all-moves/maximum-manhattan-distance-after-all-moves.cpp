class Solution {
public:
    int maxDistance(string moves) {
        int n = moves.size();
        int count1 = 0;
        int count2 = 0;
        int count3 = 0;
        int count4 = 0;
        int count5 = 0;
        string s = moves;
        for(int i = 0;i<n;i++){
            if(s[i]=='L'){
                count1++;
            }
             if(s[i]=='R'){
                count2++;
            }
             if(s[i]=='U'){
                count3++;
            }
             if(s[i]=='D'){
                count4++;
            }
             if(s[i]=='_'){
                count5++;
            }
        }
        int ans = abs(count1-count2) + abs(count3-count4) + count5;
        return ans;
    }
};