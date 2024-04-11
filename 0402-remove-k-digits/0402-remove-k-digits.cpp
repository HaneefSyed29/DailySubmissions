class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(auto ch:num){
            if(st.empty() && ch == '0') continue;
            while(!st.empty() && st.top() > ch && k > 0){
                st.pop();
                k--;
            }
            if(!st.empty() || ch != '0'){
                st.push(ch);
            }            
        }

        while(!st.empty() && k--){
            st.pop();
        }

        if(st.empty()){
            return "0";
        }

        string ans = "";

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};