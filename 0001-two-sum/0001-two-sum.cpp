class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int second=target-nums[i];

            if(m.find(second)!=m.end()){
                return {i,m[second]};
                break;
            }
            m[nums[i]]=i;
        }
        return {};
    }
};