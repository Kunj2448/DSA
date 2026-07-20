class Solution {
public:
    bool isValid(string s) {
       int n = s.size();
        if(n % 2) return false;
        vector<char> st(n);     
        int top = -1;
        for(char c : s) {
            if(c=='(' || c=='{' || c=='[') st[++top] = c;
            else {
                if(top < 0) return false;
                char open = st[top--];
                if((c==')' && open!='(') ||
                (c=='}' && open!='{') ||
                (c==']' && open!='[')) return false;
            }
        }
        return top == -1;
    }
};