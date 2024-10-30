class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(auto a: accounts){
            int sum = 0;
            for(auto b : a){
                sum += b;
            if(sum>ans) ans = sum;
            }
        }
        return ans;
    }
};
