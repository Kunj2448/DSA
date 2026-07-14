class Solution {
public:
    int removeDuplicates(vector<int>& vec) {
        int n= vec.size();
        int point=0;

        for(int i=0;i<n;i++){
            if(i==n-1||vec[i]!=vec[i+1]){
                vec[point]=vec[i];
                point++;
            }
        }
        return point;
    }
};