class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.size();
        int count = 0;
        int sum = 0;
        for(int i = 0;i<n;i++){
            count = 0;
            for(int i = 0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    count++;
                }
            }
            if(count==k){
                sum++;
            }
            char ch = s[0];
            s.erase(0, 1);
            s.push_back(ch);
        }
        return sum;
    }
};