class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s : operations){
            int N =a.size();
            if(s=="+") a.push_back( a[N-1] + a[N-2]);
            else if(s=="D") a.push_back( a[N-1]*2 );
            else if(s=="C") a.pop_back();
            else a.push_back(stoi(s) );

        }
        int ans =0;
        for(int b : a) ans +=b;
        return ans;

    }
};
