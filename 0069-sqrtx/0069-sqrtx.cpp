class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;

        int st=0,end=x/2,ans=0;
        while(st<=end){
            long long mid=st+(end-st)/2;
            if(mid*mid==x) return mid;
            else if(mid*mid<x){
                ans=mid;
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }

        return ans;
    }
};