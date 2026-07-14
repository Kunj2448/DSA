class Solution {
public:
    int lengthOfLastWord(string s) {

        reverse(s.begin(),s.end());
        s.erase(0, s.find_first_not_of(' ')); 
        int n=0;
        while(n<s.size() && s[n]!=' '){
            n++;
        }
    return n;   
    }
};