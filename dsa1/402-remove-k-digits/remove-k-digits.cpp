class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for(char i : num) {
            while(!st.empty() && st.top() > i && k) {
                st.pop();
                k--;
            }

            if(!st.empty() || i != '0') {
                st.push(i);
            }
        }

        while(!st.empty() && k--) {
            st.pop();
        }

        string ans;

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans.empty() ? "0" : ans;
    }
};