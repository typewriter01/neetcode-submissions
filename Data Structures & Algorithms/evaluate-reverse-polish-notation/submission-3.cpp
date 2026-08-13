class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n= tokens.size();
        stack<long long> st;
        for(int i=0; i<n;i++){
            if(!(isdigit(tokens[i][0]) || isdigit(tokens[i][1]))){
                long long ans=st.top();
                st.pop();
                if (tokens[i] == "+") ans= ans+st.top();
                else if (tokens[i] == "-") ans=st.top()-ans;
                else if (tokens[i] == "*") ans=st.top()*ans;
                else  if (tokens[i] == "/") ans=st.top()/ans;
                st.pop();
                st.push(ans);
            }
            else{
                st.push(stoll(tokens[i]));
            }
        }
        return st.top();
    }
};