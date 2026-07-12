class Solution {
public:
    bool isPalindrome(int x) {
        int copyx=x;
        long long reverse=0;
        while(copyx>0){
            int digit=copyx%10;
            reverse=reverse*10+digit;
            copyx/=10;
        }
        if(x==reverse){
            return true;
        }
        else{
            return false;
        }
    }
};