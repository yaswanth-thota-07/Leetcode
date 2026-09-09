class Solution {
public:
    int calculate(string s) {
        string s1;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                s1.push_back(s[i]);
            }
        }

        string s2;
        int i=0;

        while(i<s1.size()){
            if(s1[i]!='*'&&s1[i]!='/'){
                s2.push_back(s1[i]);
                i++;
            }else{
                char op=s1[i];

                int a=0;
                int j=s2.size()-1;
                int p=1;

                while(j>=0&&isdigit(s2[j])){
                    a=(s2[j]-'0')*p+a;
                    p*=10;
                    j--;
                }

                i++;

                int b=0;
                while(i<s1.size()&&isdigit(s1[i])){
                    b=b*10+(s1[i]-'0');
                    i++;
                }

                int c;

                if(op=='*'){
                    c=a*b;
                }else{
                    c=a/b;
                }

                while(s2.size()>0&&isdigit(s2.back())){
                    s2.pop_back();
                }

                s2+=to_string(c);
            }
        }

        int ans=0;
        int num=0;
        char op='+';

        i=0;

        while(i<s2.size()){
            if(isdigit(s2[i])){
                num=0;

                while(i<s2.size()&&isdigit(s2[i])){
                    num=num*10+(s2[i]-'0');
                    i++;
                }

                if(op=='+'){
                    ans+=num;
                }else{
                    ans-=num;
                }
            }else{
                op=s2[i];
                i++;
            }
        }

        return ans;
    }
};