class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int point=m+n-1;

        while(m>0 && n>0){
        if(nums1[m-1]<=nums2[n-1]){
            nums1[point]=nums2[n-1];
            n--;


        }
        else{
            nums1[point]=nums1[m-1];
            m--;
            }
            point--;
        }
        
        while(n-1>=0){
            nums1[point]=nums2[n-1];
            n--;
            point--;
        }
    }
};