class Solution {
public:
    int search(vector<int>& vec, int target) {

        int st=0,end=vec.size()-1;

        while(st<=end){

            int mid=st+(end-st)/2;

            if(vec[mid]==target){
                return mid;
            }
            else if(vec[st]<=vec[mid]){
                if(vec[st]<=target && vec[mid]>=target){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else{
                if(vec[mid]<=target && vec[end]>=target){
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        

    return -1;
    }
};