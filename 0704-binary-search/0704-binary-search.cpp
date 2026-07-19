class Solution {
public:

    int binarySearch(vector<int>& vec,int target,int st,int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            if(vec[mid]==target) return mid;
            else if(vec[mid]<=target){
                return binarySearch(vec,target,mid+1,end);
            }
            else{
                return binarySearch(vec,target,st,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        return binarySearch(nums,target,st,end);
         
    }
};