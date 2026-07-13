class Solution {
public:
    void sortColors(vector<int>& vec) {

        int low=0,mid=0,high=vec.size()-1;

        while(mid<=high){

            if(vec[mid]==0){
                swap(vec[low],vec[mid]);
                low++;
                mid++;
            }
            else if(vec[mid]==1){
                mid++;
            }
            else{
                swap(vec[mid],vec[high]);
                high--;
            }


        }
        
    }
};