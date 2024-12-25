class Solution {
public:
    double myPow(double x, long long int n) {
        // 狦 n  0ヴ计 0 Ωよ常琌 1
        if (n == 0) return 1;

        // 狦 n 璽计荡癸盢 x 计
        if (n < 0) {
            n = -n;       // 盢 n 跑タ计
            x = 1 / x;    // 盢 x 计
        }

        // е硉经患耴场だ
        if (n % 2 == 0) {
            // 讽 n 案计患耴璸衡经Ω
            double now = myPow(x, n / 2);
            return now * now; // キよ
        } else {
            // 讽 n 计患耴璸衡经Ω x
            double now = myPow(x, n / 2);
            return now * now * x;
        }
    }
};
