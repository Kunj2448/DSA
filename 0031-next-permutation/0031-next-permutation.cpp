class Solution {
public:
    void nextPermutation(vector<int>& vec) {

        int piv=-1;
        int n=vec.size();
        for(int i=n-2;i>=0;i--){
            if(vec[i]<vec[i+1]){
                piv=i;
                break;
            }
        }
        if(piv == -1) {
            reverse(vec.begin(), vec.end());
            return;
        }

        for(int i=n-1;i>piv;i--){
            if(vec[piv]<vec[i]){
                swap(vec[piv],vec[i]);
                break;  
            }
        }
        int i = piv + 1, j = n - 1;

        while (i <= j)
            {
                swap(vec[i], vec[j]);
                i++;
                j--;
            }

    }
};