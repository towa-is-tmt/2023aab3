//�ϥΤj�@�Ъ���֪k, �A���k���A ���P�N ans++
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0; //�j��e�� ans=0
        while(start>0 || goal>0){
            if(start%2 != goal%2) ans++; //�@�����X�N++
            start /=2;//���
            goal/=2;//���

        }
        return ans; //�j��᭱ return ans
    }
}
