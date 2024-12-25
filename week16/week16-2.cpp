class Solution {
public:
    double myPow(double x, long long int n) {
        // �p�G n �� 0�A����ƪ� 0 ���賣�O 1
        if (n == 0) return 1;

        // �p�G n ���t�ơA������ȨñN x ���˼�
        if (n < 0) {
            n = -n;       // �N n �ܬ�����
            x = 1 / x;    // �N x ���˼�
        }

        // �ֳt�����k����
        if (n % 2 == 0) {
            // �� n �����ƮɡA���k�p��@�b������
            double now = myPow(x, n / 2);
            return now * now; // ����Y�i
        } else {
            // �� n ���_�ƮɡA���k�p��@�b�������æh���@�� x
            double now = myPow(x, n / 2);
            return now * now * x;
        }
    }
};
