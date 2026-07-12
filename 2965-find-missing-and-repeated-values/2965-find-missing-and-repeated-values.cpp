class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        unordered_set<int> s;
        int actualsum=0,expsum=0;
        int a,b;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                actualsum+=grid[i][j];

                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                }

                s.insert(grid[i][j]);
            }
        }

        expsum = (n*n * (n*n + 1)) / 2;

        b=expsum-(actualsum-a);

        cout<<"Number "<<a<<" is repeated and number "<<b<<" is missing so the answer is ["<<a<<","<<b<<"].";
        return {a,b};
    }
};