class Solution {
public:
   string addBinary(string a, string b) {
    int carry = 0;
    int i = a.length() - 1, j = b.length() - 1;
    vector<int> ans;
    while(i >= 0 || j >= 0) {
        if(i < 0) {
            // 只加b
            int now = b[j] - '0' + carry;
            ans.push_back(now % 2);
            carry = now / 2;
            j--;
        } else if(j < 0) {
            // 只加a
            int now = a[i] - '0' + carry;
            ans.push_back(now % 2);
            carry = now / 2;
            i--;
        } else {
            // 兩個都加
            int now = a[i] - '0' + b[j] - '0' + carry;
            ans.push_back(now % 2);
            carry = now / 2;
            i--;
            j--;
        }
    }
    if(carry > 0) ans.push_back(carry); // 有進位
    int N = ans.size();
    string ans2(N, '0');
    for(int i = 0; i < N; i++) {
        ans2[i] = ans[N - 1 - i] + '0';
    }
    return ans2;
    }
};
#pragma GCC optimize ("O2")
