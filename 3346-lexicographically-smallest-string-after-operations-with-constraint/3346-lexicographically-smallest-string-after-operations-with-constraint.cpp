class Solution {
public:
    int solve(char ch){
        return min(ch - 'a' , 26 - (ch - 'a'));
    }

    string getSmallestString(string s, int k) {
        for(int i=0;i<s.length();i++){
            int distance = solve(s[i]);
            if(distance <= k){
                s[i] = 'a';
                k -= distance;
            }
            else{
                s[i] -= k;
                k = 0;
                break;
            }
        }
        return s;
    }
};